#!/bin/python
import sys

def sockMerchant(n, ar):
    aMap = {}
    count = 0
    for sock in ar :
        if aMap.get(sock) == None :
            aMap[sock] = 0
        aMap[sock] = aMap.get(sock) + 1
        if aMap[sock] > 1 and aMap[sock] % 2 == 0 : 
            count +=1
    return count

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = sockMerchant(n, ar)
print(result)