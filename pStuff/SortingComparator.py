#!/bin/python
'''
Comparators are used to compare two objects. In this challenge, you'll create a comparator and use it to 
sort an array. The Player class is provided in the editor below; it has two fields:
	1. string name
	2. int score

Given an array of  n Player objects, write a comparator that sorts them in order of decreasing score; if  2 or more 
players have the same score, sort those players alphabetically by name. To do this, you must create a Checker 
class that implements the Comparator interface, then write an int compare(Player a, Player b) method 
implementing the Comparator.compare(T o1, T o2) method.
'''
import sys

class Player:
    def __init__(self, name, score):
        self.name = name
        self.score = score
    def __repr__(self):
        return "%s %d" %(self.name, self.score)
    def comparator(a, b):
        if(a.score == b.score):
            return 1 if a.name > b.name else -1 
        return b.score - a.score

n = int(raw_input())
data = []
for i in range(n):
    name, score = raw_input().split()
    score = int(score)
    player = Player(name, score)
    data.append(player)
    
data = sorted(data, cmp=Player.comparator)
for i in data:
    print i.name, i.score