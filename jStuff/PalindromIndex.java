/*
Given a string, S , of lowercase letters, determine the index of the character whose removal
will make S a palindrome. If S is already a palindrome or no such character exists, then
print -1. There will always be a valid solution, and any correct answer is acceptable. For
example, if S = "bcbc", we can either remove 'b' at index 0 or 'c' at index 3.
 */

import java.util.*;
import java.text.*;

public class PalindromeIndex {

    static int palindromeIndex(String s){
        int i = 0;
        int j = s.length() - 1;
        while( i < s.length()/2 ){
            if( s.charAt(i) != s.charAt(j)){ 
                if(s.charAt(i + 1) == s.charAt(j)) { 
                    s = s.substring(0,i) + s.substring(i+1); //delete the ith char in s
                    String reverse = new StringBuffer(s).reverse().toString(); // reverse s
                    if( s.equals(reverse) )   
                        return i;
                }
                return j;
            }
            i++;
            j--;
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = palindromeIndex(s);
            System.out.println(result);
        }
    }
}