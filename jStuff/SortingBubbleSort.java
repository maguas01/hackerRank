/*
Given an n element array A = a0, a1,...,a(n-1) fo distint elements, sort array A in ascending order using the 
Bubble Sort algorithm above. Once sorted, print the following three line: 
	1. Arrays is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place
	2.  First Element: firstElement, where  firstElement is the first element in the sorted array
	3. Last Element: lastElement, where  lastElement is the last element in the sorted array
*/

import java.util.Scanner;

public class SortingBubbleSort {
    
    public static int bubbleSort(int[] a){
        int numberOfSwaps = 0;
        for(int i = 1; i < a.length; i++){
            for(int j = 1; j < a.length; j++){
                int current = a[j];
                int last = a[j-1];
                if( last > current ){
                    a[j-1] = current;
                    a[j] = last;
                    numberOfSwaps++;
                }
            }
        }
        return numberOfSwaps;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int numberOfSwaps = bubbleSort(a);
        System.out.println("Array is sorted in " + numberOfSwaps + " swaps.");
        System.out.println("First Element: " + a[0] );
        System.out.println("Last Element: " + a[n-1] );
    }
}
