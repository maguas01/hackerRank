#!/bin/python
'''
Given an n element array A = a0, a1,...,a(n-1) fo distint elements, sort array A in ascending order using the 
Bubble Sort algorithm above. Once sorted, print the following three line: 
	1. Arrays is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place
	2.  First Element: firstElement, where  firstElement is the first element in the sorted array
	3. Last Element: lastElement, where  lastElement is the last element in the sorted array
'''

import sys

def bubbleSort(a) : 
    numberOfSwaps = 0
    for i in range(1, len(a)) : 
        for j in range(1, len(a)) : 
            if( a[j-1] > a[j] ) : 
                a[j-1], a[j] = a[j], a[j -1]
                numberOfSwaps += 1
    return numberOfSwaps

def main() : 
    n = int(raw_input().strip())
    a = map(int, raw_input().strip().split(' '))
    numberOfSwaps = bubbleSort(a)
    print "Array is sorted in %d swaps." % numberOfSwaps
    print "First Element: %d" % a[0]
    print "Last Element: %d" % a[n-1]

if __name__ == "__main__" : 
    main()
