import java.util.Scanner;

public class Solution {
    /**
    * Fixes the bill between Brian and Anna
    * @param n the number of items
    *@param k the item Anna did not order
    *@param b the amount Anna was charged
    * @param ar array of length n containing the cost of items
    * @return -1 if b is the correct amount Anna is supposed to be chared otherwise returns the correct charge 
    */
    static int bonAppetit(int n, int k, int b, int[] ar) {
        int sum = 0, sumMinusK;
        for(int i: ar)
            sum += i;
        sumMinusK = sum/2 - ar[k]/2;
        return sumMinusK == b ? -1 : b - sumMinusK;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        int result = bonAppetit(n, k, b, ar);
        if( result == -1 )
            System.out.println("Bon Appetit");
        else
            System.out.println(result);
    }
}