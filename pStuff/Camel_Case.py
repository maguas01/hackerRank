#!/bin/python

'''
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

    It is a concatenation of one or more words consisting of English letters.
    All letters in the first word are lowercase.
    For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given , print the number of words in on a new line.
'''

import sys

def solve(s) : 
    count = 0
    for i in range(len(s)) : 
        if ord(s[i]) < 97 : 
            count += 1
    return count + 1

def main() :
    s = raw_input().strip()
    print solve(s)

if __name__ == "__main__" :
    main()