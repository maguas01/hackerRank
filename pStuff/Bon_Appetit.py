#!/bin/python
import sys

def bonAppetit(n, k, b, ar):
    sum = 0
    for cost in ar : 
        sum += cost
    sum = sum/2 - ar[k]/2
    return "Bon Appetit" if sum == b else (b - sum)

n, k = raw_input().strip().split(' ')
n, k = [int(n), int(k)]
ar = map(int, raw_input().strip().split(' '))
b = int(raw_input().strip())
result = bonAppetit(n, k, b, ar)
print(result)