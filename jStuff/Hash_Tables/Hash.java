import java.util.*;
/**
 * 
 *
 * @author (Aguas, m)
 * @version (12 JULY 2017)
 */
public class Hash
{
    Map<String, Integer> magazineMap;
    Map<String, Integer> noteMap;
    
    public Hash(String magazine, String note) {
        
    }
    
    public boolean solve() {
        
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        
        // Eat whitespace to beginning of next line
        scanner.nextLine();
        
        Hash s = new Hash(scanner.nextLine(), scanner.nextLine());
        scanner.close();
        
        boolean answer = s.solve();
        if(answer)
            System.out.println("Yes");
        else System.out.println("No");
      
    }
}
