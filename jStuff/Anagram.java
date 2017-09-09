/*
Sid is obsessed with reading short stories. Being a CS student, he is doing some interesting
frequency analysis with the books. He chooses strings s1 and s2 in such a way that 
|len(s1) - len(s2)| <= 1 .

Your task is to help him find the minimum number of characters of the first string he needs
to change to enable him to make it an anagram of the second string.

Note: A word x is an anagram of another word y if we can produce y by rearranging the
letters of x.
*/

import java.util.Scanner;

public class Anagram {
    
    static int anagram(String s){
        int letters[] = new int[26];
        int count = 0;
        if(s.length() % 2 == 1)
            return -1;
        for(int i = 0; i < s.length()/2; i++){
            letters[(s.charAt(i) - 97)]++;
        }
        for(int i = s.length()/2; i < s.length(); i++ ){ 
            letters[(s.charAt(i) - 97)]--;
        }
        for (int i = 0; i < letters.length; i++){ 
            count += Math.abs(letters[i]);
        }
        return count/2;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = anagram(s);
            System.out.println(result);
        }
    }
}
