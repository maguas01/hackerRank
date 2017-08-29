/*
    Steve has a string, s , consisting of n lowercase English alphabetic letters. 
    In one operation, he can delete any pair of adjacent letters with same value. 
    For example, string "aabcc" would become either "aab" or "bcc" after 1 operation.

    Steve wants to reduce s as much as possible. To do this, he will repeat the 
    above operation as many times as it can be performed. Help Steve out by finding 
    and printing 's non-reducible form!
 */

import java.util.*;

public class Solution {

    static String super_reduced_string(String s){
        if(s.length() == 0 ) { 
            return "Empty String";
        }
        for(int i = 0; i < s.length() - 1; i++) { 
            if(s.charAt(i) == s.charAt(i+1) ) { 
                s = s.substring(0, i) + s.substring(i+2, s.length()); 
                return super_reduced_string(s);
            }
        }
        return s;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = super_reduced_string(s);
        System.out.println(result);
    }
}