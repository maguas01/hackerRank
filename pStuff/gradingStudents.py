#!/bin/python
'''
HackerLand University has the following grading policy:

    Every student receives a grade in the inclusive range from 0 to 100 .
    Any less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's according to these rules:

    If the difference between the and the next multiple of is less than , round up to the next multiple of .
    If the value of is less than , no rounding occurs as the result will still be a failing grade.

For example, will be rounded to but will not be rounded because the rounding would result in a number that is less than .

Given the initial value of for each of Sam's students, write code to automate the rounding process. For each , 
round it according to the rules above and print the result on a new line.
'''


import sys

def solve(grades):
    curvedGrades = [0]*(len(grades))
    for i in range (0,len(grades)) : 
        if grades[i] < 37 : 
            curvedGrades[i] = grades[i]
        else : 
            if grades[i] % 5 != 3 and grades[i] % 5 != 4 : 
                curvedGrades[i] = grades[i]
            else :
                curvedGrades[i] = grades[i] + 5 - (grades[i] % 5)
    return curvedGrades

n = int(raw_input().strip())
grades = []
grades_i = 0
for grades_i in xrange(n):
    grades_t = int(raw_input().strip())
    grades.append(grades_t)
result = solve(grades)
print "\n".join(map(str, result))