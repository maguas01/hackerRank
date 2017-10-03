#!/bin/python

'''
A jail has n prisoners, and each prisoner has a unique id number, s , ranging from 1 to n . There are m sweets that must be 
distributed to the prisoners.

The jailer decides the fairest way to do this is by sitting the prisoners down in a circle (ordered by ascending  s), and then, 
starting with some random s, distribute one candy at a time to each sequentially numbered prisoner until all candies are distributed. 
For example, if the jailer picks prisoner  s = 2 , then his distribution order would be (2,3,4,5,...,n-1,n,1,2,3,4,...) until all m sweets are distributed.

But wait—there's a catch—the very last sweet is poisoned! Can you find and print the ID number of the last prisoner to receive 
a sweet so he can be warned?
'''

import sys

def saveThePrisoner(n, m, s):
    num = (m + s - 1) % n
    return n if num == 0 else num

def main() :
    t = int(raw_input().strip())
    for a0 in xrange(t):
        n, m, s = raw_input().strip().split(' ')
        n, m, s = [int(n), int(m), int(s)]
        result = saveThePrisoner(n, m, s)
        print(result)
    
if __name__ == "__main__" : 
    main()