'''
Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway. The length of the service lane is N units. The service lane consists of N segments of equal length and different width.

Calvin can enter to and exit from any segment. Let's call the entry segment as index and the exit segment as index . Assume that the exit segment lies after the entry segment (i < j) and 0 <= i . Calvin has to pass through all segments from index to index (both inclusive).
'''

#!/bin/python
import sys

def solve(i,j,width) : 
    smallest = width[i]
    for x in range (i, j+1) :
        if( width[x] < smallest) :
            smallest = width[x]
    return smallest

def main():
    n,t = raw_input().strip().split(' ')
    n,t = [int(n),int(t)]
    width = map(int,raw_input().strip().split(' '))
    for a0 in xrange(t):
        i,j = raw_input().strip().split(' ')
        i,j = [int(i),int(j)]
        print solve(i, j, width)

main()