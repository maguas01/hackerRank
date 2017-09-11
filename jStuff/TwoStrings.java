/*
 Given two strings a, and b, determine if they share a common substring.
 */
 
import java.util.*;

public class TwoStrings {

    static String twoStrings(String s1, String s2){
        boolean letters[] = new boolean[26];
        for (char c : s1.toCharArray() )
            letters[c - 97] = true;
        for (char c : s2.toCharArray() )
            if(letters[c - 97] == true)
                return "YES";
        return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s1 = in.next();
            String s2 = in.next();
            String result = twoStrings(s1, s2);
            System.out.println(result);
        }
    }
}
