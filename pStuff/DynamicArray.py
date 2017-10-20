#!/bin/python

'''
Create a list, seqList of N empty sequences, wherer each sequence is indexed from 0 to N - 1.
the elemts within each of the N sequences also use 0 indexing.

create an integer, lastAnswer, and initialize it to 0

the 2 types of queries that can be performed on your list of sequences are described below : 
	1. Query 1 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		append integer y to sequence seq
	
	2. Query 2 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		find the value of element y % size in seq (where  size is the size of seq) and assign it to lastAnswer
		print the new value of lastAnswer on a new line
		
	Given N, Q, queries, execute each query.  
'''

def functionOne(n, x, y, lastAnswer, arr) : 
    seq = (x ^ lastAnswer) % n
    arr[seq].append(y)
    return arr
    
def functionTwo(n, x, y, lastAnswer, arr) : 
    seq = (x ^ lastAnswer) % n
    size = len(arr[seq])
    return arr[seq][y % size]

def main() : 
    a = map(int, raw_input().strip().split(' '))
    n = a[0]
    q = a[1]
    
    #print " %d -- %d" %(n, q)
    
    arr = []
    for i in range(n) :
        arr.append([])
    
    lastAnswer = 0
    for i in range(q) :
        b = map(int, raw_input().strip().split(' '))  
        num = b[0]
        x = b[1]
        y = b[2]
        if num == 1 : 
            arr = functionOne(n, x, y, lastAnswer, arr )
        else : 
            lastAnswer = functionTwo(n, x, y, lastAnswer, arr)
            print lastAnswer
    
if __name__ == "__main__" : 
    main()
    