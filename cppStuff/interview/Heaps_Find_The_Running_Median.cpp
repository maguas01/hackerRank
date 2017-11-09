#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <cassert>

template <class T>
class min_heap
{
public:
	min_heap() 
    {
        v = new std::vector<T>();
        assert(v != NULL);
    }
	~min_heap() 
    {
        delete v;
    }
    //post - returns the size of the heap
	int size() { return v->size(); }
    //post - returns the oth element of the non empty vector
	T top()
	{
		if (v->size() == 0)
			throw std::out_of_range("heap is empty.");
		else
			return v->at(0);
	}
    //post - pushes data to the back of vector then hepifies up
	void push(T data)
	{
		v->push_back(data);
		heapifyUp();
	}
    // pre - non empty vector 
	//post - removes and returns  the 0th element of the vector 
	T pop()
	{
		int lastElement = (int)(v->size() - 1);
		T frontElement = v->at(0);
		if (v->size() > 1)
			swap(v, 0, lastElement);
		if (v->size() > 0)
			v->pop_back();
		heapifyDown();
		return frontElement;
	} 
	
private:
	std::vector<T>* v;
	// pre - index > 0
    //post - swaps the lastElement with its parent as long as the parent > child
	void heapifyUp()
	{
		int index = (int)(v->size() - 1);
		int parent = (index - 1) / 2;
		while (index > 0 && v->at(index) < v->at(parent) )
		{
			swap(v, index, parent);
			index = parent;
			parent = (index - 1) / 2;
		}
	}
    //post - swaps the parent element with the left or right child whichever is smaller while the
	//	parent < child
	void heapifyDown()
	{
		int index = 0;
		int lastElement = (int)(v->size() - 1);
		while (2 * index + 1 <= lastElement)
		{
            int leftChild = 2 * index + 1;
			int rightChild = 2 * index + 2;
			int smallestChild = leftChild;
			if (rightChild <= lastElement && v->at(rightChild) < v->at(leftChild) )
				smallestChild = rightChild;
			if (v->at(index) < v->at(smallestChild) )
				break;
			else
				swap(v, index, smallestChild);
			index = smallestChild;
		}
	}
    // pre - at least 2 elemts exist in vector v
	//post - swaps the elements of a and b in vector v
	void swap(std::vector<T>*  v, int a, int b)
	{
		T temp = v->at(a);
		v->at(a) = v->at(b);
		v->at(b) = temp;
	}
};
// pre - num is not null
//post - prints the median 
void printMedian(double num)
{
	std::cout << std::fixed << std::setprecision(1);
    std::cout << num << '\n'; 
}
// pre - bottomQ and topQ are both non empty
//post - returns  a double num, num is the median
double getMedian(min_heap<int> & bottomQ, min_heap<int> & topQ)
{
    double num = 0;
    if( bottomQ.size() > topQ.size() )
        num = (double)( -bottomQ.top() );
    else if( topQ.size() > bottomQ.size() )
        num = (double)topQ.top();
    else   
        num = (double)(-bottomQ.top() + topQ.top())/2;
	return num;
}
// pre - bottomQ and topQ are non empty
//post - balances the two heaps such that abs( bottomQ size - topQ size ) < 2 
void balanceQueues(min_heap<int> & bottomQ, min_heap<int> & topQ)
{
    if( (int)(bottomQ.size() - topQ.size()) > 1)
        topQ.push( -bottomQ.pop() );
    if( (int)(topQ.size() - bottomQ.size()) > 1)
        bottomQ.push( -topQ.pop() );
}
// pre - vector a is non empty
//post - prints the median of vector a
void findMedians(std::vector<int> & a)
{
    min_heap<int> bottomQ; //max heap
    min_heap<int> topQ;   //min heap
    bottomQ.push(-a[0]);
    double num = getMedian(bottomQ, topQ);
    printMedian(num);
    for(int i = 1; i < a.size(); i++)
    {
        if(-bottomQ.top() < a[i])
            topQ.push(a[i]);
        else  
            bottomQ.push(-a[i]);
        balanceQueues(bottomQ, topQ);
		num = getMedian(bottomQ, topQ);
        printMedian(num);
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
       std::cin >> a[a_i];
    findMedians(a);
    return 0;
}
