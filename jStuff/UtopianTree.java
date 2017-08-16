import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
           
            int index = ( n/2 ) + 1;
            if ( n%2 == 1 )
                System.out.println((int) (2 * (Math.pow(2, index) - 1) ) );
            else 
                System.out.println((int) (Math.pow(2, index) - 1 ) );
        }
    }
}