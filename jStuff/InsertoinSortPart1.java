/*
 Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with an already sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number e in the rightmost cell, can you write some simple code to insert e into the array so that it remains sorted?

Print the array every time a value is shifted in the array until the array is fully sorted. The goal of this challenge is to follow the correct order of insertion sort.

Guideline: You can copy the value of e to a variable and consider its cell "empty". Since this leaves an extra cell empty on the right, you can shift everything over until V can be inserted. This will create a duplicate of each value, but when you reach the right spot, you can replace it with e. 
*/

import java.util.*;

public class Solution {
    
    
    public static void print(int arr[]){
        for(Integer i : arr)
            System.out.print(i + " ");
        System.out.println();
    }
    
    public static void solve(int arr[]){
        int last = arr.length - 1;
        int num = arr[last];
        int j = last - 1;
        while(arr[j] > num  ){
            arr[j+1] = arr[j];
            print(arr);
            j--;
            if (j < 0)
            break;
        }
        j += 1; 
        arr[j] = num;
        print(arr);
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
        for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
        }
        solve(ar);
    }

}