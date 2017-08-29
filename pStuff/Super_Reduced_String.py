#!/bin/python

'''
    Steve has a string, s , consisting of n lowercase English alphabetic letters. 
    In one operation, he can delete any pair of adjacent letters with same value. 
    For example, string "aabcc" would become either "aab" or "bcc" after 1 operation.

    Steve wants to reduce s as much as possible. To do this, he will repeat the 
    above operation as many times as it can be performed. Help Steve out by finding 
    and printing 's non-reducible form!
 '''

import sys

def super_reduced_string(s) :
    if len(s) == 0 : 
        return "Empty String"
    for i in range (len(s) - 1) :
        if ( s[i] == s[i + 1] ) : 
            s = s[:i] + s[i+2:]
            return super_reduced_string(s)
    return s
        
def main() : 
    s = raw_input().strip()
    result = super_reduced_string(s)
    print(result)

if __name__ == "__main__" : 
    main()