/*
 Amanda has a string, m , of lowercase letters that she wants to copy into a new string, p . She
 can perform the following operations any number of times to construct string p :

    Append a character to the end of string p at a cost of 1 dollar.
    Choose any substring of p and append it to the end of p at no charge.

 Given n strings (i.e., s0, s1,...,s(n-1) ), find and print the minimum cost of copying each s(i) to p(i) on a new line.
*/

import java.util.*;

public class StringConstruction {

    static int stringConstruction(String s) {
        int count = 0;
        boolean alphabet[] = new boolean[26];
        for(Character c : s.toCharArray() )
            alphabet[c - 97] = true;
        for(boolean isTrue : alphabet )
            if(isTrue)
                count++;
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = stringConstruction(s);
            System.out.println(result);
        }
        in.close();
    }
}