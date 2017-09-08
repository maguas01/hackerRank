#!/bin/python

'''
Given a string, S , of lowercase letters, determine the index of the character whose removal
will make S a palindrome. If S is already a palindrome or no such character exists, then
print -1. There will always be a valid solution, and any correct answer is acceptable. For
example, if S = "bcbc", we can either remove 'b' at index 0 or 'c' at index 3.
'''

import sys

def palindromeIndex(s):
    i = 0
    j = len(s) - 1
    while( i < len(s)/2 ) : 
        if s[i] != s[j] :
            if s[i+1] == s[j] : 
                s = s[:i] + s[i+1:]  #remove the ith char in s
                reverse = s[::-1]    #reverse string
                if s == reverse :    #check string symetry
                    return i 
            return j
        i += 1
        j -= 1
    return -1
    
def main() : 
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = palindromeIndex(s)
        print(result)

if __name__ == "__main__" : 
    main()