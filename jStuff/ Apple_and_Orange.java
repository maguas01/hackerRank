import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int appleCount = 0, orangeCount = 0;
        
        for(int apple_i=0; apple_i < m; apple_i++){
            int temp = a + in.nextInt();
            if(s <= temp && temp <= t)
              appleCount++;
        }
     
        for(int orange_i=0; orange_i < n; orange_i++){
            int temp = b + in.nextInt();
            if(s <= temp && temp <= t)
                orangeCount++;
        }
        System.out.print(appleCount + "\n" + orangeCount);
    }
}
