#!/bin/python

import sys

def solve(n, s, d, m):
    count = 0
    for i in range (0, len(s) - m + 1 ) :
        sum = 0
        for j in range(i, i + m ) :
            sum += s[j]
        if sum == d : 
            count += 1
    return count

n = int(raw_input().strip())
s = map(int, raw_input().strip().split(' '))
d, m = raw_input().strip().split(' ')
d, m = [int(d), int(m)]
result = solve(n, s, d, m)
print(result)
