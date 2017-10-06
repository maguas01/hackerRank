#!/bin/python

'''
In Insertion Sort Part 1, you sorted one element into an array. Using the same approach repeatedly, can 
you sort an entire unsorted array?

Guideline: You already can place an element into a sorted array. How can you use that code to build 
up a sorted array, one element at a time? Note that in the first step, when you consider an array with 
just the first element - that is already "sorted" since there's nothing to its left that is smaller.

In this challenge, don't print every time you move an element. Instead, print the array after each 
iteration of the insertion-sort, i.e., whenever the next element is placed at its correct position.

Since the array composed of just the first element is already "sorted", begin printing from the second 
element and on.
'''

import sys

def insertionSort(ar):    
    for i in range(1, len(ar)) : 
        j = i - 1
        while ar[j+1] < ar[j] :
            temp = ar[j+1]
            ar[j+1] = ar[j]
            ar[j] = temp
            if j > 0 : 
                j -= 1
        for x in ar : print x,
        print 

def main() : 
    m = input()
    ar = [int(i) for i in raw_input().strip().split()]
    insertionSort(ar)

if __name__ == "__main__" : 
    main()
