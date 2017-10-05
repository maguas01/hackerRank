#!/bin/python

'''

Watson gives two integers ( and ) to Sherlock and asks if he can count the number of square integers
 between and (both inclusive).

'''

import sys

def solve(a, b) : 
    count = 0
    n = 0
    i= 0
    while (n < b + 1) : 
        k = 2 * i + 1
        n += k
        if (a <= n and n <= b) : 
            count += 1
        i += 1
    return count
    
def main() : 
    n = int(raw_input().strip())
    for i in range(n) : 
        a, b = raw_input().strip().split(' ')
        a, b = [int(a), int(b)]
        results = solve(a, b)
        print results
    
if __name__ == "__main__" : 
    main()
