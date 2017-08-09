#!/bin/python

import sys


s,t = raw_input().strip().split(' ')
s,t = [int(s),int(t)]
a,b = raw_input().strip().split(' ')
a,b = [int(a),int(b)]
m,n = raw_input().strip().split(' ')
m,n = [int(m),int(n)]
apples = map(int,raw_input().strip().split(' '))
oranges = map(int,raw_input().strip().split(' '))

appleCount, orangeCount, apple, orange = 0, 0, 0, 0;
for apple in apples : 
    apple += a
    if s <= apple and apple <= t : 
        appleCount += 1

for orange in oranges : 
    orange += b;
    if s <= orange and orange <= t : 
        orangeCount += 1
print "%d\n%d" % (appleCount, orangeCount)