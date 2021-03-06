/*
Aerith is playing a cloud game! In this game, there are n clouds numbered sequentially from 0 to  n-1. 
Each cloud is either an ordinary cloud or a thundercloud.

Aerith starts out on cloud 0 with energy level E = 100. She can use 1 unit of energy to make a jump of size k to cloud (i+k)%n, 
and she jumps until she gets back to cloud . If Aerith lands on a thundercloud, her energy (e) decreases by 2 additional units. 
The game ends when Aerith lands back on cloud 0.

Given the values of n,k , and the configuration of the clouds, can you determine the final value of after the game ends?
*/

import java.util.Scanner;

public class Solution {
    
    public static int solve(int c[], int k){
        int e = 100;
        for(int i = 0; i < c.length; i += k ){
            if(c[i] == 1){
                e -= 2;
            }
            e -=1;
        }
        return e;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int c[] = new int[n];
        for(int c_i=0; c_i < n; c_i++){
            c[c_i] = in.nextInt();
        }
        int results  = solve(c, k);
        System.out.println(results);
    }
}

