 #!/bin/python

'''
 You are given a string containing characters A and B only, your task is to change it into a string such that every two consecutive characters are different. To do this, you are allowed to delete one or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, string ABAA should be changed to ABA by deleting one character A. 
 '''

import sys

def alternatingCharacters(s):
    count = 0
    lastChar = s[0]
    for i in range(1, len(s)) : 
        if s[i] == lastChar : 
            count += 1
        else : 
            lastChar = s[i]
    return count
    
def main() : 
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = alternatingCharacters(s)
        print(result)
        
if __name__ == "__main__" : 
    main()