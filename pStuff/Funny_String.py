#!/bin/python

'''
Suppose you hava a string s of length n that is indexed from 0 - n-1. You also have some string r
that is the reverse of stirng s. s is funny if the condition : 
[|s(i) - s(i-1) |] == [|r(i) - r(i-1)|] is true for every character  i from 1 to n-1
'''

import sys

def funnyString(s):
    j = len(s) - 2
    for i in range(1, len(s)) : 
        front = abs( ord(s[i]) - ord(s[i - 1]) ) 
        rear = abs( ord(s[j]) - ord(s[j + 1]) )
        if front != rear : 
            return "Not Funny"
        j -= 1
    return "Funny"
    
def main() :
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = funnyString(s)
        print(result)

if __name__ == "__main__" : 
    main()