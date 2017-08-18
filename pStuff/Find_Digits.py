#!/bin/python
import sys

'''
 Given an integer, N , traverse its digits (d1,d2,...,dn) and
 determine how many digits evenly divide N (i.e.: count the 
 number of times divided by each digit d_i has a remainder of 0). Print the number of evenly divisible digits. 
 '''

def solve(n) : 
    count = 0
    m = n
    while (m > 0) : 
        lastDigit = m % 10
        if (lastDigit != 0) :
            if (n % lastDigit == 0) : 
                count += 1
        m = m / 10
    return count

t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())
    print solve(n)