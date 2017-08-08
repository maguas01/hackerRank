/*
 
 HackerLand University has the following grading policy:

    Every student receives a grade in the inclusive range from 0 to 100  .
    Any less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's according to these rules:

    If the difference between the and the next multiple of is less than , round up to the next multiple of .
    If the value of is less than , no rounding occurs as the result will still be a failing grade.

For example, will be rounded to but will not be rounded because the rounding would result in a number that is less than .

Given the initial value of for each of Sam's students, write code to automate the rounding process. For each , round it according to the rules above and print the result on a new line.
 
 */


#include <bits/stdc++.h>

// pre - vector with student grades is passed to function
// post - vector with curved grades are returned
std::vector < int > solve(std::vector < int > grades)
{
    std::vector<int> curvedGrades(grades.size());
    for (int i = 0; i < grades.size(); i++)
    {
        int grade = grades[i];
        if(grade < 37 )
            curvedGrades[i] = grade;
        else
        {
            if( grade % 5 == 0  || grade % 5 == 1 || grade % 5 == 2  ) 
         // if( grade % 5 != 3  && grade % 5 != 4 ) // works just as well
                curvedGrades[i] = grade;
            else
                curvedGrades[i] = grade + 5 - (grade % 5);
        }

    }
    return curvedGrades;
}



int main()
{
    int n;
    std::cin >> n;
    std::vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++)
        std::cin >> grades[grades_i];
    std::vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) 
        std::cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    std::cout << std::endl;

    return 0;
}

