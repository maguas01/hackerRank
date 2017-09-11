#!/bin/python

'''
Given two strings a, and b, determine if they share a common substring.
'''

import sys

def twoStrings(s1, s2):
    letters = [False] * (26)
    for c in s1 : 
        letters[ord(c) - 97] = True
    for c in s2 :
        if (letters[ord(c) - 97] == True) : 
            return "YES"
    return "NO"
    
def main() :
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s1 = raw_input().strip()
        s2 = raw_input().strip()
        result = twoStrings(s1, s2)
        print(result)
        
if __name__ == "__main__" : 
    main()