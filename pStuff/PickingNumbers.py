#!/bin/python

'''
Given an array of integers, find and print the maximum number of integers you can select 
from the array such that the absolute difference between any two of the chosen integers 
is <= 1
'''

import sys

def solve(a) : 
    largest = 0
    for num in a : 
        count = 0
        for otherNum in a : 
            if otherNum + 1 == num or otherNum == num : 
                count += 1
        if count > largest : 
            largest = count 
    return largest

def main() : 
    n = int(raw_input().strip())
    a = map(int,raw_input().strip().split(' '))
    print solve(a)
    
if __name__ == "__main__" : 
    main()
