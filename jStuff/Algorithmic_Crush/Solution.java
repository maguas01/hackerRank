import java.util.Scanner;
/**
 * You are given a list of size , initialized with zeroes. You have to perform operations
 * on the list and output the maximum of final values of all the elements in the list. 
 * For every operation, you are given three integers , and and you have to add value to 
 * all the elements ranging from index to (both inclusive).
 
 *Input Format

 *First line will contain two integers and separated by a single space.
 *Next lines will contain three integers , and separated by a single space.
 *Numbers in list are numbered from to . 

 * @author (Aguas, m)
 * @version (12 JULY 2017)
 */
public class Solution
{
   
   public static void main(String[] args)
   {
       Scanner in = new Scanner(System.in);
       long n = in.nextLong();
       long m = in.nextLong();
       long arr[] = new long[(int)n + 1];
       long largest = 0, sum = 0;
       
       for (int i = 0; i < m; i++)
       {
           long a = in.nextLong();
           long b = in.nextLong();
           long k = in.nextLong();
           
           arr[(int)a] += k;
           if( b+1 <= n )
                arr[(int)b+1] -= k;                                         
       }
       
       for (long i : arr)
       {
           sum += i;
           largest = (sum > largest) ? sum : largest;
       }
       
       System.out.println(largest);
       for(long i : arr )
        System.out.print(i + " ");
   }
}
