
/*
	In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times 
	the width of a letter, and the height is the maximum height of any letter in the word.
	
	Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. 
	Given the height of each letter in millimeters (mm), find the total area that will be highlighted by blue 
	rectangle in mm^2 when the given word is selected in our new PDF viewer.
	*/
	
import java.util.*;

public class Solution {
    
    public static int solve(int h[], String word){
        int largest = - 99;
        for(char c : word.toCharArray()){
            if(h[c - 'a'] > largest){
                largest = h[c- 'a'];
            }
        }
        return largest * word.length();
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        int answer = solve(h, word);
        System.out.println(answer);
    }
}