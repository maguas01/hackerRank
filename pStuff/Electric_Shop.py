#!/bin/python
'''
Monica wants to buy exactly one keyboard and one USB drive from her favorite electronics store. 
The store sells different brands of keyboards and different brands of USB drives. Monica has
exactly dollars to spend, and she wants to spend as much of it as possible (i.e., the total cost 
of her purchase must be maximal).

Given the price lists for the store's keyboards and USB drives, find and print the amount money
Monica will spend. If she doesn't have enough money to buy one keyboard and one USB drive, print
-1 instead.
'''
import sys

def getMoneySpent(keyboards, drives, s) :
    maxMoney = 0;
    keyboards.sort()
    drives.sort(reverse = True) 
    for a in drives : 
        for b in keyboards : 
            if a + b > s :
                break
            if a + b > maxMoney :
                maxMoney = a + b
    if maxMoney == 0 : 
        return -1
    return maxMoney
            
def main() :
    s,n,m = raw_input().strip().split(' ')
    s,n,m = [int(s),int(n),int(m)]
    keyboards = map(int, raw_input().strip().split(' '))
    drives = map(int, raw_input().strip().split(' '))
    moneySpent = getMoneySpent(keyboards, drives, s)
    print(moneySpent)

if __name__ == "__main__" : 
    main()