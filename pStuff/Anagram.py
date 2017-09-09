#!/bin/python

'''
Sid is obsessed with reading short stories. Being a CS student, he is doing some interesting
frequency analysis with the books. He chooses strings s1 and s2 in such a way that 
|len(s1) - len(s2)| <= 1 .

Your task is to help him find the minimum number of characters of the first string he needs
to change to enable him to make it an anagram of the second string.

Note: A word x is an anagram of another word y if we can produce y by rearranging the
letters of x.
'''

import sys

def anagram(s):
    if len(s) % 2 == 1 :
        return -1
    count = 0
    s1 = sorted(s[len(s)/2:])
    s2 = sorted(s[:len(s)/2])
    s2 = "".join(s2) 
    
    for i in range( len(s1) ) :
        j = s2.find(s1[i])
        if j != -1 :
            s2 = s2[:j] + s2[j+1:]
    return len(s2)

def main() :
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = anagram(s)
        print(result)

if __name__ == "__main__" : 
    main()