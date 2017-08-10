#!/bin/python

import sys

def divisibleSumPairs(n, k, ar):
    count = 0
    for i in range (0, len(ar) ) :
        for j in range (i + 1, len(ar) ) :
            if ( ar[i] + ar[j] ) % k == 0 :
                count += 1
    return count

n, k = raw_input().strip().split(' ')
n, k = [int(n), int(k)]
ar = map(int, raw_input().strip().split(' '))
result = divisibleSumPairs(n, k, ar)
print(result)