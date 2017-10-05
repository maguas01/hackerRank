#!/bin/python

'''
Aerith is playing a cloud game! In this game, there are n clouds numbered sequentially from 0 to  n-1. 
Each cloud is either an ordinary cloud or a thundercloud.

Aerith starts out on cloud 0 with energy level E = 100. She can use 1 unit of energy to make a jump of size k to cloud (i+k)%n, 
and she jumps until she gets back to cloud . If Aerith lands on a thundercloud, her energy (e) decreases by 2 additional units. 
The game ends when Aerith lands back on cloud 0.

Given the values of n,k , and the configuration of the clouds, can you determine the final value of after the game ends?
'''

import sys

def solve(c, k) :
    e = 100
    for i in range(0, len(c), k) : 
        if c[i] == 1 :
            e -= 2
        e -= 1
    return e

def main() :
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    c = map(int,raw_input().strip().split(' '))
    results = solve(c, k)
    print results
    
if __name__ == "__main__" :
    main()