#!/bin/python

'''
In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times 
the width of a letter, and the height is the maximum height of any letter in the word.
	
Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. 
Given the height of each letter in millimeters (mm), find the total area that will be highlighted by blue 
rectangle in mm^2 when the given word is selected in our new PDF viewer
'''

import sys

def solve(h, word) : 
    largest = -99
    for letter in word : 
        number = h[ord(letter) - 97]
        if number > largest : 
            largest = number 
    return largest * len(word)
    
def main() :
    h = map(int, raw_input().strip().split(' '))
    word = raw_input().strip()
    answer = solve(h, word)
    print answer

if __name__ == "__main__" : 
    main()
