/*
In Insertion Sort Part 1, you sorted one element into an array. Using the same approach repeatedly, can 
you sort an entire unsorted array?

Guideline: You already can place an element into a sorted array. How can you use that code to build 
up a sorted array, one element at a time? Note that in the first step, when you consider an array with 
just the first element - that is already "sorted" since there's nothing to its left that is smaller.

In this challenge, don't print every time you move an element. Instead, print the array after each 
iteration of the insertion-sort, i.e., whenever the next element is placed at its correct position.

Since the array composed of just the first element is already "sorted", begin printing from the second 
element and on.
*/

import java.util.Scanner;

public class Solution {

    public static void printArray(int[] ar) {
        for(int n: ar)
            System.out.print(n+" ");
        System.out.println("");
    }
    
    
    public static void insertionSortPart2(int[] ar) {       
        for(int i = 1; i < ar.length; i++){
            int j = i - 1;
            while(ar[j+1] < ar[j]){
                int temp = ar[j + 1];
                ar[j+1] = ar[j];
                ar[j] = temp;
                if(j > 0)
                    j--;
            }
            printArray(ar);
        }
    }  
    
    
      
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
        for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
        }
        insertionSortPart2(ar);                
    }    
}