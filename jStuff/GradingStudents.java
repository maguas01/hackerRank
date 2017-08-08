import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class GradingStudents 
{
    /**
     *  Curves grades according to a proffesor's schema
     *  @param an array of grades to be curved
     *  @return an array of curved grades
     */
    static int[] solve(int[] grades)
    {
        int[] curvedGrades = new int[grades.length];
        for(int i = 0; i < grades.length; i++)
        {
            int grade = grades[i];
            if (grade < 37)
                curvedGrades[i] = grade;
            else
            {
                if( grade % 5 != 4 && grade % 5 != 3 )
                    curvedGrades[i] = grade;
                else 
                    curvedGrades[i] = grade + 5 - (grade % 5 );
            }
        }
        return curvedGrades;
    }

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++)
            grades[grades_i] = in.nextInt();
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) 
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        System.out.println("");
    }
}
