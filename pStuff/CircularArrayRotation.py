#!/bin/python

'''
John Watson performs an operation called a right circular rotation on an array of integers,[a0, a1,..., an-1] . After performing one right 
circular rotation operation, the array is transformed from [a0, a1,..., an-1]  to [an-1, a0,...,a1].

Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position 
in the rotated array, Watson asks q queries, where each query consists of a single integer, m , for which you must print the 
element at index m in the rotated array (i.e., the value of  a_m).
'''

import sys

def solve(a, m, k) : 
        i = -k 
        while(i < 0) :   # i = -k mod a.size(). i is now the zeroth index of the roated array
            i += len(a)
        for j in range (len(m)) : 
            index = (i + m[j]) % len(a) # (i +m[j]) % a.size() is the new index we wish to print
            print a[index]

def main() :
    n,k,q = raw_input().strip().split(' ')
    n,k,q = [int(n),int(k),int(q)]
    m = [0] * q
    a = map(int,raw_input().strip().split(' '))
    for a0 in xrange(q):
        m[a0] = int(raw_input().strip())
    solve(a, m, k)
        
if __name__ == "__main__" : 
    main()