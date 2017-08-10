import java.util.Scanner;

public class Solution {
    /**
    * Returns the number of tuples in ar whose sum divisible by k
    * @param ar - array of size n
    * @param n - the size of array ar
    * @param k - integer which we use to check divisibility
    * @return the number of pairs which are divisibility by k in ar
    */
    static int divisibleSumPairs(int n, int k, int[] ar) {
        int count = 0;
        for (int i = 0; i < ar.length; i++)
            for (int j = i + 1; j < ar.length; j++)
                if( (ar[i] + ar[j]) % k ==0 )
                    count++;
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = divisibleSumPairs(n, k, ar);
        System.out.println(result);
    }
}