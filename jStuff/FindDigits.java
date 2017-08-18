import java.util.Scanner;

/*
 Given an integer, N , traverse its digits (d1,d2,...,dn) and
 determine how many digits evenly divide N (i.e.: count the 
 number of times divided by each digit d_i has a remainder of 0). Print the number of evenly divisible digits. 
 */

public class Solution {
    /**
    * Counts the number of time the a digit in number can divide the number evenly
    * @param number to be operated on 
    * @return the number of time the a digit in number can divide the number evenly
    */
    static int solve (int number) { 
        int count = 0, dividedNumber = number; 
        while (dividedNumber > 0) { 
            int lastDigit = dividedNumber % 10;
            if (lastDigit != 0)
                if ( number % lastDigit == 0 )
                    count++;
            dividedNumber /= 10;
        }
    return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            System.out.println(solve(n));
        }
    }
}