import java.util.Scanner;
import java.math.BigInteger;

public class Solution {
    static BigInteger factorial(int n) { 
        BigInteger big = new BigInteger("" + n);
        while(n-->1)
        {
            BigInteger a = new BigInteger("" + n);
            big = big.multiply(a);
        }
        return big;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(factorial(n));  
    }
}