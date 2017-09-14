/*
Sherlock considers a string, s , to be valid if either of the following conditions are satisfied:
    1. All characters in s have the same exact frequency (i.e., occur the same number of times). For example, s = "aabbcc" is valid, but s = "baacdd" is not valid.
    
    2. Deleting exactly 1 character from will result in all its characters having the same frequency. For example, s "aabbccc" and s = "aabbc" are valid because all their letters will
    have the same frequency if we remove 1 occurrence of c, but s = "abccc" is not valid because we'd need to 3 remove characters.

Given s, can you determine if it's valid or not? If it's valid, print YES on a new line; otherwise, print NO instead.
 */

import java.util.*;

public class SherlockAndTheValidString {

    public static boolean check(int alphabet[]){ 
        int lastNum = alphabet[0];
        for(int i = 1; i < 26; i++){
            if(alphabet[i] != lastNum && alphabet[i] != 0)
                return false;
            if(alphabet[i] != 0)
                lastNum = alphabet[i];
        }
        return true;
    }
    
    public static String isValid(String s){
        int alphabet[] = new int[26];
        for(Character c : s.toCharArray() )
            alphabet[c - 97]++;
        if(check(alphabet))
            return "YES";
        
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;
        int largestIndex = -99;
        int smallestIndex = 99;
        for(int i = 0; i < 26; i++){
            if(alphabet[i] > largest){
                largest = alphabet[i];
                largestIndex = i;
            }
            if(alphabet[i] < smallest && alphabet[i] != 0){
                smallest = alphabet[i];
                smallestIndex = i;
            }
        }
        // remove 1 from the largest index and check
        alphabet[largestIndex] -= 1;
        if( check(alphabet) )
        return "YES";
        alphabet[largestIndex] += 1;
        // remove 1 from the smallest index and check  
        alphabet[smallestIndex] -= 1;
        if( check(alphabet) )
            return "YES";
        return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = isValid(s);
        System.out.println(result);
    }
}
