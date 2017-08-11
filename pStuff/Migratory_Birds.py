#!/bin/python
import sys

def migratoryBirds(n, ar):
    type = [0]*5
    for birds in ar : 
        type[birds - 1] += 1
    largest = 0
    for i in range(1, len(type) ) : 
        if type[i] > type[largest] : 
            largest = i
    return largest + 1

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = migratoryBirds(n, ar)
print(result)