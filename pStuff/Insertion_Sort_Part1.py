#!/bin/python

'''
 Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with an already sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number e in the rightmost cell, can you write some simple code to insert e into the array so that it remains sorted?

Print the array every time a value is shifted in the array until the array is fully sorted. The goal of this challenge is to follow the correct order of insertion sort.

Guideline: You can copy the value of e to a variable and consider its cell "empty". Since this leaves an extra cell empty on the right, you can shift everything over until V can be inserted. This will create a duplicate of each value, but when you reach the right spot, you can replace it with e. 
'''

def insertionSort(ar) :
    last = len(ar) - 1
    num = ar[last]
    j = last - 1
    while ar[j] > num : 
        ar[j+1] = ar[j]
        print str(ar).replace('[','').replace(']','').replace(',', '')
        j -= 1
        if( j < 0) : 
            break
    ar[j+1] = num
    print str(ar).replace('[','').replace(']','').replace(',', '')

def main() : 
    m = input()
    ar = [int(i) for i in raw_input().strip().split()]
    insertionSort(ar)

if __name__ == "__main__" : 
    main()