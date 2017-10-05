/*
Watson gives two integers ( and ) to Sherlock and asks if he can count the number of square integers
 between and (both inclusive).
*/

import java.util.Scanner;

public class Solution {

    public static int solve(int a,int b){
    int n = 0, k = 0, i = 0, count = 0;
    while (n < b+1){            //stop when nth square root is larger than b
        k = 2 * i + 1;          //  generate 2n+1 
        n = n + k;              // add it to the previous square start at 0^2 = 0
        if( a <= n && n <= b )  // if square belongs to [a, b] increment the count
            count++;
        i++;               
    }
    return count;
}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while (n-->0){
            int a = in.nextInt();
            int b = in.nextInt();
            int results = solve(a, b);
            System.out.println(results);
        }
    }
}