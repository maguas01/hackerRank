/*
Given an array of integers, find and print the maximum number of integers you can select from the array 
such that the absolute difference between any two of the chosen integers is .<= 1
*/

import java.util.Scanner;

public class PickingNumbers {
    
    private static int solve(int a[]){
        int largest = 0;
        for(int num : a){
            int count = 0;
            for(int otherNum : a){
                if(otherNum + 1 == num || otherNum == num ){
                    count++;
                }
            }
            if(count > largest){
                largest = count;
            }
        }
        return largest;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int results = solve(a);
        System.out.println(results);
    }
}
