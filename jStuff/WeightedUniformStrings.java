/*
 A weighted string is a string of lowercase English letters where each letter has a weight in the inclusive range from a = 1 to z = 26
 
 Given a String s, let U be the set of weights for all the possible uniform substrings(contiguous) of string . You have to answer n queriesm where each query i
 consists of a single integer x_i. For each query, print Yes on a new line if x_i belongs to 
 U; otherwise print No instead.
 */

import java.util.*;

public class WeightedUniformStrings {
    static boolean numbers[];
    
    static void storeNumbers(String s, boolean numbers[]){
        int count = 1;
        int lastChar = -99;
        for (char c : s.toCharArray() ){
            int currChar = c - 96;
            if(currChar == lastChar)
                count++;
            else 
                count = 1;
            numbers[currChar * count] = true;
            lastChar = currChar;
        }
    }
    
    static boolean solve(int x, boolean numbers[]){
        if(numbers[x] == true)
            return true;
        return false;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        numbers = new boolean[10000000];
        storeNumbers(s, numbers);
        int n = in.nextInt();
        for(int a0 = 0; a0 < n; a0++){
            int x = in.nextInt();
            boolean ans = solve(x, numbers);
            if(ans)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}
