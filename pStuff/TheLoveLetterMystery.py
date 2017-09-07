#!/bin/python

'''
 James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows two rules:

    He can reduce the value of a letter, e.g. he can change d to c, but he cannot change c to d.
    In order to form a palindrome, if he has to repeatedly reduce the value of a letter, he can do it until the letter becomes a. Once a letter has been changed to a, it can no longer be changed.

Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.
'''

import sys

def theLoveLetterMystery(s) :
    i = 0
    j = len(s) - 1
    count = 0
    while i < len(s)/2 : 
        intI = ord(s[i])
        intJ = ord(s[j])
        if intI < intJ :
            while intI < intJ :
                intJ -= 1
                count += 1
        elif intI > intJ :
            while intI > intJ : 
                intI -= 1
                count += 1
        i += 1
        j -= 1
    return count 
    
def main() : 
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = theLoveLetterMystery(s)
        print(result)

if __name__ == "__main__" : 
    main()