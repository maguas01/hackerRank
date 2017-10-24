/*
The median of a dataset of integers is the midpoint value of the dataset for which an equal number of 
integers are less than and greater than the value. To find the median, you must first sort your dataset of 
integers in non-decreasing order, then:

	If your dataset contains an odd number of elements, the median is the middle element of the sorted sample.
	In the sorted dataset {1, 2, 3}  2 is the median.
	
	f your dataset contains an even number of elements, the median is the average of the two middle elements 
	of the sorted sample. In the sorted dataset  {1, 2, 3, 4}(2+3)/2 = 2.5 is the median.
	
	Given an input stream of  n integers, you must perform the following task for each ith integer:
		1. add the ith integer to a running list of integers 
		2. find the median of the updated list
		3. print the list's updated median on a new line, the printed value must be double precision number 
		scaled to 1 decimal place (i.e. 12.3 format)
*/

#include <vector>
#include <iostream>
#include <queue>
#include <iomanip>

void printMedian(std::priority_queue<int> & bottomQ, std::priority_queue< int, std::vector<int>, std::greater<int> > & topQ){
    double num = 0;
    if( bottomQ.size() > topQ.size() )
        num = (double)bottomQ.top();
    else if( topQ.size() > bottomQ.size() )
        num = (double)topQ.top();
    else   
        num = (double)(bottomQ.top() + topQ.top())/2;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << num << '\n'; 
}

void balanceQueues(std::priority_queue<int> & bottomQ, std::priority_queue<int, std::vector<int>, std::greater<int> > & topQ){
    
    if( (int)(bottomQ.size() - topQ.size()) > 1){
        topQ.push( bottomQ.top() );
        bottomQ.pop();
    }
    if( (int)(topQ.size() - bottomQ.size()) > 1){
        bottomQ.push( topQ.top() );
        topQ.pop();
    }
}

void findMedian(std::vector<int> & a){
    std::priority_queue<int> bottomQ; 		//maxQueue 
    std::priority_queue< int, std::vector<int>, std::greater<int> > topQ;   	//minQueue
    bottomQ.push(a[0]);
    printMedian(bottomQ, topQ);
    
    for(int i = 1; i < a.size(); i++){
        if(bottomQ.top() < a[i])
            topQ.push(a[i]);
        else  
            bottomQ.push(a[i]);
        balanceQueues(bottomQ, topQ);
        printMedian(bottomQ, topQ);
    }
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
        std::cin >> a[a_i];
    findMedian(a);
    return 0;
}
