#!/bin/python
import sys

def solve(n, ud) : 
    level = prevLevel = count = 0
    for char in ud :
        prevLevel = level
        level = level + 1 if char == 'U' else level-1
        if level == 0 and prevLevel == -1 : 
            count += 1
    return count

n = int(raw_input().strip())
ud = str(raw_input().strip())
print solve(n, ud)