#!/bin/python

'''
John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lower-case Latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a gem-element if it occurs at least once in each of the rocks.

Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.
'''

import sys

def gemstones(arr) :
    s1 = set(arr[0])
    for word in arr : 
        s2 = set(word)
        s1 = s1.intersection(s2)
    return len(s1)

def main() :
    n = int(raw_input().strip())
    arr = []
    arr_i = 0
    for arr_i in xrange(n):
        arr_t = str(raw_input().strip())
        arr.append(arr_t)
    result = gemstones(arr)
    print(result)
    
if __name__ == "__main__" : 
    main()