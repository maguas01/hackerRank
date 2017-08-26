/*
Monica wants to buy exactly one keyboard and one USB drive from her favorite electronics store.
The store sells different brands of keyboards and different brands of USB drives. Monica has
exactly dollars to spend, and she wants to spend as much of it as possible (i.e., the total cost 
of her purchase must be maximal).

Given the price lists for the store's keyboards and USB drives, find and print the amount money
Monica will spend. If she doesn't have enough money to buy one keyboard and one USB drive, print
-1 instead.
*/
import java.util.*;


public class ElectricShop {

    static int getMoneySpent(int[] keyboards, int[] drives, int s) {
        int maxMoney = 0;
        Arrays.sort(keyboards);
        Arrays.sort(drives);
        for(int i = keyboards.length - 1; i > -1; i--) { 
            int a = keyboards[i];
            for (int j = 0; j < drives.length; j++) { 
                int b = drives[j];
                if( a + b > s )
                    break;
                if( a + b > maxMoney )
                    maxMoney = a + b;
            }
        }
        if(maxMoney == 0)
            return -1;
        return maxMoney;                
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int n = in.nextInt();
        int m = in.nextInt();
        int[] keyboards = new int[n];
        for(int keyboards_i=0; keyboards_i < n; keyboards_i++){
            keyboards[keyboards_i] = in.nextInt();
        }
        int[] drives = new int[m];
        for(int drives_i=0; drives_i < m; drives_i++){
            drives[drives_i] = in.nextInt();
        }
        int moneySpent = getMoneySpent(keyboards, drives, s);
        System.out.println(moneySpent);
    }
}

