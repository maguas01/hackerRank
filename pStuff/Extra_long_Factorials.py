#!/bin/python

import sys
def factorial(n) : 
    if n == 1 :
        return 1
    if n > 1 :
        return n*factorial(n-1)

n = long(raw_input().strip())
print factorial(n)