/*
Suppose you hava a string s of length n that is indexed from 0 - n-1. You also have some string r
that is the reverse of stirng s. s is funny if the condition : 
[|s(i) - s(i-1) |] == [|r(i) - r(i-1)|] is true for every character  i from 1 to n-1
*/

import java.util.*;

public class FunnyString {

    static String funnyString(String s){
        int j = s.length() - 2;
        for (int i = 1; i < s.length(); i ++){ 
           int front = Math.abs( s.charAt(i) - s.charAt(i - 1) );
           int rear = Math.abs( s.charAt(j) - s.charAt(j + 1) );
           if( front != rear )
               return "Not Funny";
           j--;
        }
        return "Funny";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            String result = funnyString(s);
            System.out.println(result);
        }
    }
}