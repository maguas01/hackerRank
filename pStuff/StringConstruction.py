#!/bin/python

'''
 Amanda has a string, m , of lowercase letters that she wants to copy into a new string, p . She
 can perform the following operations any number of times to construct string p :

    Append a character to the end of string p at a cost of 1 dollar.
    Choose any substring of p and append it to the end of p at no charge.

 Given n strings (i.e., s0, s1,...,s(n-1) ), find and print the minimum cost of copying each s(i) to p(i) on a new line.
'''

import sys

def stringConstruction(s):
    count = 0
    alphabet = [False]*26
    for c in s : 
        alphabet[ord(c) - 97] = True
    for isTrue in alphabet : 
        if isTrue : 
            count += 1
    return count

def main() :
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = stringConstruction(s)
        print result

if __name__ == "__main__" :
    main()