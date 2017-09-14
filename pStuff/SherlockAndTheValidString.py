#!/bin/python

'''
Sherlock considers a string, s , to be valid if either of the following conditions are satisfied:
    1. All characters in s have the same exact frequency (i.e., occur the same number of times). For example, s = "aabbcc" is valid, but s = "baacdd" is not valid.
    
    2. Deleting exactly 1 character from will result in all its characters having the same frequency. For example, s "aabbccc" and s = "aabbc" are valid because all their letters will
    have the same frequency if we remove 1 occurrence of c, but s = "abccc" is not valid because we'd need to 3 remove characters.

Given s, can you determine if it's valid or not? If it's valid, print YES on a new line; otherwise, print NO instead.
'''

import sys

def check(alphabet) : 
    last = alphabet[0]
    for num in alphabet : 
        if num != last and num != 0 :
            return False;
        if num != 0 :
            last = num
    return True

def isValid(s):
    alphabet = [0]*26
    for c in s : 
        alphabet[ord(c) - 97] += 1
    if check(alphabet) : 
        return "YES"
    largest = -sys.maxsize
    smallest = sys.maxsize
    largestIndex = -99
    smallestIndex = 99
    # find the smallest and largets index
    for i in range(len(alphabet)) : 
        if(alphabet[i] > largest) : 
            largest = alphabet[i]
            largestIndex = i
        if(alphabet[i] < smallest) and (alphabet[i] != 0) : 
            smallest = alphabet[i]
            smallestIndex = i
    #subtract 1 from the largest index and check
    alphabet[largestIndex] -= 1
    if check(alphabet) : 
        return "YES"
    alphabet[largestIndex] += 1
    #subtract 1 from the smallest index and check
    alphabet[smallestIndex] -= 1
    if check(alphabet) :
        return "YES"
    return "NO"
    
def main() :
    s = raw_input().strip()
    result = isValid(s)
    print(result)

if __name__ == "__main__" : 
    main()