#!/bin/python

'''
Dan is playing a video game in which his charecter competes in a hurdle race by jumping over
n hurdles with h_0, h_1, ... h_(n-1) He can initially jimp a maximum height of k units. but he 
has an unlimited supply of magic beverages thta help him jump higher! Each time Dan drinks a magic 
beverage, the maximum height he can jump during the race increases by 1 units

Given n,k. and the heights of all the hurdles, find and print the minumum number of magic beverages 
Dan must drink to complete the race. 
'''

import sys

def solve(k, height) :
    tallest = 0
    for a in height : 
        if (a > tallest) : 
            tallest = a
    drinks = tallest - k if tallest - k > 0 else 0
    return drinks

def main() :
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    height = map(int, raw_input().strip().split(' '))
    print solve(k, height)

if __name__ == "__main__" :
    main()