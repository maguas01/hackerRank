#!/bin/python

'''
 Two cats named and are standing at integral points on the x-axis. Cat is standing at point and cat is standing at point . Both cats run at the same speed, and they want to catch a mouse named that's hiding at integral point on the x-axis. Can you determine who will catch the mouse?

You are given queries in the form of , , and . For each query, print the appropriate answer on a new line:

    If cat A catches the mouse first, print Cat A.
    If cat B catches the mouse first, print Cat B.
    If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
'''
import sys

def solve(x, y, z) :
    if abs(x - z) == abs(y - z) : 
        return "Mouse C"
    return "Cat A" if abs(x - z) < abs(y - z) else "Cat B"

def main() :
    q = int(raw_input().strip())
    for a0 in xrange(q):
        x,y,z = raw_input().strip().split(' ')
        x,y,z = [int(x),int(y),int(z)]
        print solve(x, y, z)

if __name__ == "__main__" : 
    main()