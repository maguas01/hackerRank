#!/bin/python

import sys
def solve(n) : 
    index = (n/2) + 1
    return 2*(2**index - 1) if n % 2 == 1  else 2**index - 1

t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())
    print solve(n)