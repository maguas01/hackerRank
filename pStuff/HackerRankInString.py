#!/bin/python

'''
 We say that a string, s , contains the word hackerrank if a subsequence of the characters in spell the word hackerrank. For example, haacckkerrannkk does contain hackerrank, but haacckkerannk does not (the characters all appear in the same order, but it's missing a second r).

More formally, let p0, p1, ..., p9 be the respective indices of h, a, c, k, e, r, r, a, n, k in string s . If  p0 < p1 < ... < p9 is true, then s contains hackerrank.

You must answer q queries, where each query consists of a string, . For each query, print YES on a new line if s contains hackerrank; otherwise, print NO instead.
'''

import sys

def solve(s) : 
    h = ['h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k']
    i = 0
    for letter in s : 
        if letter == h[i] : 
            i = i + 1
        if i > 9 : 
            return "YES"
    return "NO"

def main() : 
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        print solve(s)
    
if __name__ == "__main__" : 
    main()
