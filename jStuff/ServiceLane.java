/*
Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway. The length of the service lane is N units. The service lane consists of N segments of equal length and different width.

Calvin can enter to and exit from any segment. Let's call the entry segment as index and the exit segment as index . Assume that the exit segment lies after the entry segment (i < j) and 0 <= i . Calvin has to pass through all segments from index to index (both inclusive).
*/

import java.util.Scanner;

public class Solution {

    static int solve(int i, int j, int width[]) { 
        int smallest = width[i];
        for (int k = i + 1 ; k < j + 1; k++)
            if ( width[k] < smallest )
                smallest = width[k];
        return smallest;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        int width[] = new int[n];
        for(int width_i=0; width_i < n; width_i++) {
            width[width_i] = in.nextInt();
        }
        for(int a0 = 0; a0 < t; a0++) {
            int i = in.nextInt();
            int j = in.nextInt();
            System.out.println( solve(i, j, width) );
        }
    }
}