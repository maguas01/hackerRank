#!/bin/python

'''
Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?

Given two strings, and , that may or may not be of the same length, determine the minimum number of character deletions required to make and anagrams. Any characters can be deleted from either of the strings.

This challenge is also available in the following translations:
'''



import sys

def makingAnagrams(s1, s2) :
    arr = [0]*26
    count = 0
    for i in range(len(s1) ) : 
        arr[ord(s1[i]) - 97] += 1
    for i in range(len(s2) ) : 
        arr[ord(s2[i]) - 97] -= 1   
    for i in range( len(arr) ) :
        count += abs(arr[i])
    return count
    
def main() :
    s1 = raw_input().strip()
    s2 = raw_input().strip()
    result = makingAnagrams(s1, s2)
    print(result)
    
if __name__ == "__main__" :
    main()
