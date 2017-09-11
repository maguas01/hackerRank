#!/bin/python

'''
 A weighted string is a string of lowercase English letters where each letter has a weight in the inclusive range from a = 1 to z = 26
 
 Given a String s, let U be the set of weights for all the possible uniform substrings(contiguous) of string . You have to answer n queriesm where each query i
 consists of a single integer x_i. For each query, print Yes on a new line if x_i belongs to 
 U; otherwise print No instead.
'''

import sys

def main() : 
    s = raw_input().strip() 
    numbers = [False]*(10000000)
    count = 1
    lastChar = -99
    for i in range (len(s)) : 
        currChar = ord(s[i]) - 96
        if(currChar == lastChar) : 
            count += 1
        else :
            count = 1
        numbers[(currChar * count)] = True
        lastChar = currChar    
    
    n = int(raw_input().strip())
    for a0 in xrange(n):
        x = int(raw_input().strip())
        if( numbers[x] == True ) : 
            print "Yes"
        else : 
            print "No"
if __name__ == "__main__" : 
    main()
        
