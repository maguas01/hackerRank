import java.util.Scanner;
/**
 * There is a collection of strings ( There can be multiple occurences of a 
 * particular string ). Each string's length is no more than characters. 
 * There are also queries. For each query, you are given a string, and you need to 
 * find out how many times this string occurs in the given collection of strings. 
 *
 * @author (Aguas, M)
 * @version (11 JULY 2017)
 */
public class Solutions
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String str[] = new String[n];
        
        for(int i = 0; i < n; i++)
            str[i] = in.next();
        
        int q = in.nextInt();
        for(int i = 0; i < q; i++)
        {
            int count = 0;
            String query = in.next();
            
            for(String s: str)
                if( s.equals(query))
                    count++;
                    
            System.out.println(count);
        }
    }

    
}
