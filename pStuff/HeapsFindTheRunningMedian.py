#!/bin/python

'''
The median of a dataset of integers is the midpoint value of the dataset for which an equal number of 
integers are less than and greater than the value. To find the median, you must first sort your dataset of 
integers in non-decreasing order, then:

	If your dataset contains an odd number of elements, the median is the middle element of the sorted sample.
	In the sorted dataset {1, 2, 3}  2 is the median.
	
	f your dataset contains an even number of elements, the median is the average of the two middle elements 
	of the sorted sample. In the sorted dataset  {1, 2, 3, 4}(2+3)/2 = 2.5 is the median.
	
	Given an input stream of  n integers, you must perform the following task for each ith integer:
		1. add the ith integer to a running list of integers 
		2. find the median of the updated list
		3. print the list's updated median on a new line, the printed value must be double precision number 
		scaled to 1 decimal place (i.e. 12.3 format)
'''

import sys
import heapq

def printMedian(bottomQ, topQ) : 
    num = 0
    if len(bottomQ) > len(topQ) : 
        num = -(bottomQ[0])
    elif len(topQ) > len(bottomQ) : 
        num = topQ[0]
    else : 
        num = (topQ[0] + -(bottomQ[0]) )/2.0
    print "%.1f" % num  
    
def balanceQueues(bottomQ, topQ) : 
    if len(bottomQ) - len(topQ) > 1 :
        heapq.heappush( topQ, -heapq.heappop(bottomQ) )
    if len(topQ) - len(bottomQ) > 1 : 
        heapq.heappush( bottomQ, -heapq.heappop(topQ) )

def findMedians(a) :
    topQ = [] # minHeap
    bottomQ = [] #maxHeap implemented with negative numbers
    
    heapq.heappush(bottomQ, -(a[0]) )
    printMedian(bottomQ, topQ)
    
    for i in range(1, len(a)) : 
        if -(bottomQ[0]) < a[i] :
            heapq.heappush(topQ, a[i])
        else : 
            heapq.heappush(bottomQ, -a[i])
        balanceQueues(bottomQ, topQ)
        printMedian(bottomQ, topQ)

def main() : 
    n = int(raw_input().strip())
    a = []
    a_i = 0
    for a_i in xrange(n):
        a_t = int(raw_input().strip())
        a.append(a_t)
    findMedians(a)
    
if __name__ == "__main__" : 
    main()
