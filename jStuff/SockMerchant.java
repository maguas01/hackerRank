import java.io.*;
import java.util.*;

public class Solution {

    static int sockMerchant(int n, int[] ar) {
        Map<Integer, Integer> aMap = new HashMap<Integer, Integer>();
        int count = 0;
        for(int i : ar) {
            if(aMap.get(i) == null)
                aMap.put(i, 0);
            aMap.put(i, aMap.get(i) + 1);
            if(aMap.get(i) > 1 && aMap.get(i) % 2 == 0)
                count++;            
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = sockMerchant(n, ar);
        System.out.println(result);
    }
}