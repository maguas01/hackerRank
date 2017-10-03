/*
Lili likes to play games with integers and their reversals . For some integers x, we define reversed(x)
to be the reversal of all digits in x . For example, reversed(123) = 321, reversed(21) 12, and reversed (123) = 12.

Logan wants to go to the movies with Lilly on some day x satisfying i <= x <= j, but  he konws
she only goes to the movies on days she considers to be beautiful. Lilly consdiers a day to be beautiful if the abs value 
of the difference between x and reverse(x) is evenly divisible by k.

giving i, j, k count  and print the number of beautiful days when logan and lilly can go to the movies. 
*/

import java.util.Scanner;
import java.math.*;

public class Solution {
    
    public static long solve(long i, long j, long k){
        int count = 0;
        for(long n = i; n < j + 1; n++){
            long reversedN = rev(n);
            long results = Math.abs(n - reversedN);
            if(results % k == 0)
                count++;
        }
        return count;
    }
    
    public static long rev(long i){
        long reversedI = 0;
        long number = i;
        while( number!= 0 ) {
            reversedI = reversedI * 10;
            reversedI = reversedI + number%10;
            number = number/10;
        }
        return reversedI;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long i = in.nextLong();
        long j = in.nextLong();
        long k = in.nextLong();
        long answer = solve(i,j,k);
        System.out.println(answer);
    }
}