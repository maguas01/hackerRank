/*
Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?

Given two strings, and , that may or may not be of the same length, determine the minimum number of character deletions required to make and anagrams. Any characters can be deleted from either of the strings.

This challenge is also available in the following translations:
*/

import java.util.*;

public class MakingAnagrams {

    static int absoluteVal(int a){
        if(a > 0)
            return a;
        return -a;
    }
    
    static int makingAnagrams(String s1, String s2){
        int letters[] = new int[26];
        int count = 0;
        for(char a : s1.toCharArray())
            letters[a - 97]++;
        for(char b : s2.toCharArray() )
            letters[b - 97]--;
        for(int number : letters)
            count += absoluteVal(number);
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        String s2 = in.next();
        int result = makingAnagrams(s1, s2);
        System.out.println(result);
    }
}
