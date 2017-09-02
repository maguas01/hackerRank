/*
Sami's spaceship crashed on Mars! She sends n sequential SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, S , determine how many letters of Sami's SOS have been changed by radiation.
 */
 
import java.util.Scanner;

public class MarsExploration {
    
    public static int solve(String s) { 
        int count = 0;
        for(int i =0; i < s.length(); i++ ){
            int k = i % 3;
            if( (k == 0 || k == 2) && s.charAt(i) != 'S' ){
                count++;
            }
            if ( k == 1 && s.charAt(i) != 'O'){
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        System.out.println(solve(s));
    }
}
