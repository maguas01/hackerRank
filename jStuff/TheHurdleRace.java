/*
Dan is playing a video game in which his charecter competes in a hurdle race by jumping over
n hurdles with h_0, h_1, ... h_(n-1) He can initially jimp a maximum height of k units. but he 
has an unlimited supply of magic beverages thta help him jump higher! Each time Dan drinks a magic 
beverage, the maximum height he can jump during the race increases by 1 units

Given n,k. and the heights of all the hurdles, find and print the minumum number of magic beverages 
Dan must drink to complete the race.
*/

import java.util.*;

public class Solution {
    
    public static int solve(int k, int[] height) { 
        int tallest = 0;
        for(int h : height) { 
            if(h > tallest) { 
                tallest = h;  
            }
        }
        return tallest - k > 0 ? tallest - k : 0;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] height = new int[n];
        for(int height_i=0; height_i < n; height_i++){
            height[height_i] = in.nextInt();
        }
        System.out.println(solve(k,height));
    }
}