/*
 Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with an already sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number e in the rightmost cell, can you write some simple code to insert e into the array so that it remains sorted?

Print the array every time a value is shifted in the array until the array is fully sorted. The goal of this challenge is to follow the correct order of insertion sort.

Guideline: You can copy the value of e to a variable and consider its cell "empty". Since this leaves an extra cell empty on the right, you can shift everything over until V can be inserted. This will create a duplicate of each value, but when you reach the right spot, you can replace it with e. 
 */

#include <iostream>
#include <vector>

void insertionSort(std::vector <int>  ar) {
    int last = ar.size() - 1;
    int num = ar[last];
    int j = last - 1;
    while(ar[j] > num){
        ar[j + 1] = ar[j];
        for (int i : ar)
            std::cout << i << " ";
        std::cout << '\n';
        j--;
    }
    ar[j+1] = num;
    for(int i : ar)
        std::cout << i << " ";
    return;

}
int main(void) {
    std::vector <int>  _ar;
    int _ar_size;
    std::cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        std::cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
