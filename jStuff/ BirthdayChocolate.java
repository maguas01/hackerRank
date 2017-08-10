import java.util.Scanner;


public class Solution {
    /**
    * returns the amount of time d can summed using consicutive m indexes
    * @param n - size of array s
    * @param s - array s 
    * @param d - the sum we are looking for
    * @param m - number of consecutive indexes
    * @return - the number of times d was summed
    */
    static int solve(int n, int[] s, int d, int m) {
        int count = 0;
        for ( int i = 0; i < s.length - m + 1; i++ ) { 
            int sum = 0;
            for( int j = i; j < i + m; j++ )
                sum += s[j];
            if( sum == d )
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(int s_i=0; s_i < n; s_i++){
            s[s_i] = in.nextInt();
        }
        int d = in.nextInt();
        int m = in.nextInt();
        int result = solve(n, s, d, m);
        System.out.println(result);
    }
}
