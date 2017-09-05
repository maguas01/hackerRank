/*
 You are given a string containing characters A and B only, your task is to change it into a string such that every two consecutive characters are different. To do this, you are allowed to delete one or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, string ABAA should be changed to ABA by deleting one character A. 
 */
 
 import java.util.Scanner;

public class AlternatingCharacters {

    static int alternatingCharacters(String s){
        int count = 0;
        char lastChar = s.charAt(0);
        for (int i = 1; i < s.length(); i++){ 
            if (lastChar == s.charAt(i))
                count++;
            else 
                lastChar = s.charAt(i);
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = alternatingCharacters(s);
            System.out.println(result);
        }
    }
}
