#!/bin/python

'''
you are given a sequence of n integers p(1), p(2), ..., p(n). Each element in the sequence is distint and 
satisfies 1 < p(x) <= n. For each x where 1 <= x <= n, find any integer y such that p(p(y)) congruent to x
and print the value of y on a new line. 
'''

def solve(n, m) :
    for i in range(len(m)) : 
        num = m[i + 1]
        print m[num]
        
def main() : 
    n = int(raw_input().strip())
    p = map(int, raw_input().strip().split(' '))
    m = {}
    for i in range(len(p)) : 
        m[p[i]] = i + 1
    solve(n, m)
    
if __name__ == "__main__" : 
    main()
