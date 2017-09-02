#!/bin/python

'''
 Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.
'''

from sets import Set 

def solve(s) : 
    s = s.lower()
    alphabet = Set()
    for letter in (s) : 
        if( 97 <= ord(letter) and ord(letter) <= 122 ) : 
            alphabet.add(letter)
            if len(alphabet) == 26 : 
                return "pangram"
    return "not pangram"

def main() : 
    s = raw_input().strip()
    print solve(s)
    
if __name__ == "__main__" :
    main()