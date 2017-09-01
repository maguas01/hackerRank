'''
ulius Caesar protected his confidential information by encrypting it in a cipher. Caesar's cipher rotated every letter in a string by a fixed number, K , making it unreadable by his enemies. Given a string, S , and a number, K , encrypt S and print the resulting string.

Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted. 
'''

#!/bin/python
from __future__ import print_function
import sys

def solve(s,k) :
    k = k % 26
    for letter in s : 
        num = ord(letter)
        if ( 65 <= num and num <= 90 ) : 
            if( num + k > 90 ) : 
                print( chr( ( num + k) % 90 + 64 ), end='' )
            else : 
                print( chr(num + k), end='')
        elif( 97 <= num and num <= 122 ) : 
            if ( num + k > 122 ) : 
                    print( chr( (num + k) % 122 + 96 ),end='' ) 
            else : 
                    print( chr( num + k ), end='' )
        else :
            print( chr(num), end='' )
        
def main() : 
    n = int(raw_input().strip())
    s = raw_input().strip()
    k = int(raw_input().strip())
    solve(s, k)
    
if __name__ == "__main__" : 
    main()