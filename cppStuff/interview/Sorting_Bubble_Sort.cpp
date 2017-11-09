/*
Given an n element array A = a0, a1,...,a(n-1) fo distint elements, sort array A in ascending order using the 
Bubble Sort algorithm above. Once sorted, print the following three line: 
	1. Arrays is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place
	2.  First Element: firstElement, where  firstElement is the first element in the sorted array
	3. Last Element: lastElement, where  lastElement is the last element in the sorted array
*/

#include <vector>
#include <iostream>

void swap(std::vector<int> & a, int j)
{
    int temp = a[j-1];
    a[j-1] = a[j];
    a[j] = temp;
}

int bubbleSort(std::vector<int> & a)
{
    int count = 0;
    for(int i = 1; i < a.size(); i++)
    {
        for(int j = 1; j < a.size(); j++)
        {
            if(a[j-1] > a[j])
            {
                swap(a, j);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
       std::cin >> a[a_i];
    int numberOfSwaps = bubbleSort(a);
    std::cout << "Array is sorted in " <<  numberOfSwaps << " swaps.\n";
    std::cout << "First Element: " << a[0] << '\n';
    std::cout << "Last Element: " << a[n-1] << '\n';
    return 0;
}
