/*
Julius Caesar protected his confidential information by encrypting it in a cipher. Caesar's cipher rotated every letter in a string by a fixed number, K , making it unreadable by his enemies. Given a string, S , and a number, K , encrypt S and print the resulting string.

Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted. 
*/

import java.util.*;

public class CaeserCipher {
    
    public static void solve(String s, int k) { 
        k %= 26;
        for (char c : s.toCharArray()){
            if( 65 <= c && c <= 90 ){
                if( c + k > 90 )
                    System.out.print((char)( (c+k) % 90 + 64) );
                else
                    System.out.print( (char)(c + k) );
            }else if( 97 <= c && c <= 122 ) { 
                if( c + k > 122)
                    System.out.print((char)( (c+k) % 122 + 96 )  );
                else 
                    System.out.print((char)(c + k));
            } else { 
                System.out.print( c );
            }
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        int k = in.nextInt();
        solve(s, k);
    }
}