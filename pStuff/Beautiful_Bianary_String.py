#!/bin/python

'''
Alice has a binary string, B , of length n. She thinks a binary string is beautiful if and only if it doesn't contain the substring "010".

In one step, Alice can change a 0 to a 1 (or vice-versa). Count and print the minimum number of steps needed to make Alice see the string as beautiful.
'''
import sys

def minSteps(n, b):
    count = 0
    i = 0
    while ( i < len(b) - 2 ) : 
        if (b[i] == '0' and b[i+1] == '1' and b[i+2] == '0') :  
            count += 1
            i += 3
        else :
            i += 1
    return count

def main() : 
    n = int(raw_input().strip())
    b = raw_input().strip()
    result = minSteps(n, b)
    print(result)
    
if __name__ == "__main__" : 
    main()