#!/bin/python

'''
Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this
conspiracy from Raven and plans to lock the single door through which the enemy can enter his
kingdom.

But, to lock the door he needs a key that is an anagram of a certain palindrome string.
The king has a string composed of lowercase English letters. Help him figure out whether any
anagram of the string can be a palindrome or not.
'''

import sys

def gameOfThrones(s):
    alphabet = [0]*26
    odd = 0
    for c in s :
        alphabet[ord(c)-97] += 1
    for i in alphabet : 
        odd += i % 2
    if ( (len(s) % 2 == 0 and odd == 0) or (len(s) % 2 == 1 and odd <= 1) ) : 
        return "YES"
    return "NO"
      
def main() :
    s = raw_input().strip()
    result = gameOfThrones(s)
    print(result)

if __name__ == "__main__" : 
    main()