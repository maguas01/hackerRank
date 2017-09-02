#!/bin/python

'''
Sami's spaceship crashed on Mars! She sends n sequential SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, S , determine how many letters of Sami's SOS have been changed by radiation.
'''

import sys

def solve(s) :
    count = 0
    for i in range( len(s) )  : 
        k = i % 3
        if( (k == 0 or k == 2) and s[i] != 'S' ) : 
            count = count + 1
        if( k == 1 and s[i] != 'O') : 
            count = count + 1
    return count

def main() : 
    s = raw_input().strip()
    print solve(s)
    
if __name__ == "__main__" :
    main()