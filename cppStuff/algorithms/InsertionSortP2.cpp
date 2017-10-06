/*
In Insertion Sort Part 1, you sorted one element into an array. Using the same approach repeatedly, can 
you sort an entire unsorted array?

Guideline: You already can place an element into a sorted array. How can you use that code to build 
up a sorted array, one element at a time? Note that in the first step, when you consider an array with 
just the first element - that is already "sorted" since there's nothing to its left that is smaller.

In this challenge, don't print every time you move an element. Instead, print the array after each 
iteration of the insertion-sort, i.e., whenever the next element is placed at its correct position.

Since the array composed of just the first element is already "sorted", begin printing from the second 
element and on.
*/

#include <iostream>

void printArray(int * ar, int ar_size){
    for(int i = 0; i < ar_size; i++)
        std::cout << ar[i] << " ";
    std::cout << '\n';
}

void swap(int & x, int & y){
    int temp = x;
    x = y;
    y = temp;
}

void insertionSort(int ar_size, int * ar) {
    for(int i = 1; i < ar_size; i++){
        int j = i -1;
        while(ar[j+1] < ar[j]){
            swap(ar[j+1], ar[j]);
            if(j > 0)
                j--;
        }
        printArray(ar, ar_size);
     }
}

int main(void) {
   
    int _ar_size;
    std::cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        std::cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
