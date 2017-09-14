/*
Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this
conspiracy from Raven and plans to lock the single door through which the enemy can enter his
kingdom.

But, to lock the door he needs a key that is an anagram of a certain palindrome string.
The king has a string composed of lowercase English letters. Help him figure out whether any
anagram of the string can be a palindrome or not.
*/

import java.util.Scanner;

public class GameOfThrones {

    static String gameOfThrones(String s){
        int alphabet[] = new int[26];
        int odd = 0;
        for(Character c : s.toCharArray() ){
            alphabet[c - 97]++;
        }
        for(Integer i : alphabet){ 
            odd += i % 2;
        }
        if( (s.length() % 2 == 0 && odd == 0) || (s.length() % 2 == 1 &&  odd <= 1) ){
            return "YES";
        }
        return "NO"; 
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = gameOfThrones(s);
        System.out.println(result);
    }
}
