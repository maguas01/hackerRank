import java.util.Scanner;

public class Solution 
{
    static int migratoryBirds(int n, int[] ar) 
    {
        int results[] = new int[5];
        int largest = 0;
        for ( int i : ar )
            results[i -1] += 1;
        
        for( int i = 1; i < 5; i++)
            if( results[i] > results[largest])
                largest = i;
        return largest + 1;
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++)
            ar[ar_i] = in.nextInt();
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}