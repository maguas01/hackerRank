#!/bin/python

'''
Lili likes to play games with integers and their reversals . For some integers x, we define reversed(x)
to be the reversal of all digits in x . For example, reversed(123) = 321, reversed(21) 12, and reversed (123) = 12.

Logan wants to go to the movies with Lilly on some day x satisfying i <= x <= j, but  he konws
she only goes to the movies on days she considers to be beautiful. Lilly consdiers a day to be beautiful if the abs value 
of the difference between x and reverse(x) is evenly divisible by k.

giving i, j, k count  and print the number of beautiful days when logan and lilly can go to the movies. 
'''

import sys
import math

def solve(i,j,k) : 
    count = 0;
    for n in range(i,j) : 
        reverse = rev(n)
        results = abs(n - reverse)
        if results % k == 0 : 
            count += 1
    return count
    
def rev(i) : 
    reversedI = 0
    number = i
    while number != 0 :
        reversedI = reversedI * 10
        reversedI = reversedI + number%10
        number = math.floor(number/10)
    return reversedI

def main() :
    i,j,k = raw_input().strip().split(' ')
    i,j,k = [int(i),int(j),int(k)]
    answer = solve(i,j,k)
    print answer

if __name__ == "__main__" : 
    main()