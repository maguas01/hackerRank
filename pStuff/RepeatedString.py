#!/bin/python

'''
Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

Given an integer, n, find and print the number of letter a's in the first  n letters of Lilah's infinite string.
'''

import sys

def solve(s, n) : 
    count = 0
    for c in s :
        if c == 'a' :
            count += 1
    j = int(n/(len(s)))
    count *= j
    k = n % len(s)
    for i in range(k)  : 
        if s[i] == 'a' : 
            count += 1
    return count
        

def main() : 
    s = raw_input().strip()
    n = long(raw_input().strip())
    results = solve(s, n)
    print results
    
if __name__ == "__main__" : 
    main()