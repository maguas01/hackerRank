/*
Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

Given an integer, n, find and print the number of letter a's in the first  n letters of Lilah's infinite string.
*/

import java.util.Scanner;

public class Solution {

    private static long solve(String s, long n){
        long count = 0;
        for(char c : s.toCharArray())
            if(c == 'a')
                count++;
        
        long j = n / (s.length());
        count *= j;
        
        long k = n % s.length();
        for(int i = 0; i < k; i++)
            if(s.charAt(i) == 'a') 
                count++;
        
        return count;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        long n = in.nextLong();
        long results = solve(s, n);
        System.out.println(results);
    }
}
