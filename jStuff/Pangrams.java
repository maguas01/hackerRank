/*
 Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.
 */
 
import java.util.*;

public class Pangrams {
    
    public static String solve(String s){ 
        Set<Character> alphabet = new HashSet<Character>();
        s = s.toLowerCase();
        for (Character c : s.toCharArray() ){
            if(97 <= c && c <= 122)
                alphabet.add(c);
            if(alphabet.size() == 26)
                return "pangram";
        }
        return "not pangram";
    }
    
    public static void main(String args[] ) throws Exception {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.println(solve(s));
    }
}
