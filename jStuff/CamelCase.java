/*
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

    It is a concatenation of one or more words consisting of English letters.
    All letters in the first word are lowercase.
    For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given , print the number of words in on a new line.
*/

import java.util.*;

public class CamelCase {
    
    public static int solve(int s) { 
        int wordCount = 0;
        for(int i = 0; i < s.length(); i++) {
            if( (int)s.charAt(i) < 97) { 
                wordCount++;
            }
        }
        return wordCount + 1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        System.out.println( solve(s) );
    }
}