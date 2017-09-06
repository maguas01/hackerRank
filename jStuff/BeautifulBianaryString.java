/*
Alice has a binary string, B , of length n. She thinks a binary string is beautiful if and only if it doesn't contain the substring "010".

In one step, Alice can change a 0 to a 1 (or vice-versa). Count and print the minimum number of steps needed to make Alice see the string as beautiful.
*/

import java.util.Scanner;

public class BeautifulBianaryString {

    static int minSteps(int n, String b){
        int count = 0, i = 0;
        while ( i < b.length() - 2 ){
            if( b.charAt(i) == '0' && b.charAt(i+1) == '1' && b.charAt(i+2) == '0'){ 
                count++;
                i += 3;
            } else {
                i++;
            }     
        }
    return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String b = in.next();
        int result = minSteps(n, b);
        System.out.println(result);
    }
}