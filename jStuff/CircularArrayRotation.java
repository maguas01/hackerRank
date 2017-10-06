/*
John Watson performs an operation called a right circular rotation on an array of integers,[a0, a1,..., an-1] . After performing one right 
circular rotation operation, the array is transformed from [a0, a1,..., an-1]  to [an-1, a0,...,a1].

Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position 
in the rotated array, Watson asks q queries, where each query consists of a single integer, m , for which you must print the 
element at index m in the rotated array (i.e., the value of  a_m).
*/

import java.util.Scanner;

public class Solution {

    public static void solve(int a[], int m[], int k){
        int i = -k; 
        while(i < 0){     // i = -k mod a.size(). i is now the zeroth index of the roated array
            i += a.length;
        }
        for(int j = 0; j < m.length; j++){
            int index = (i + m[j]) % a.length; // (i +m[j]) % a.size() is the new index we wish to print
            System.out.println( a[index] );
        }
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int q = in.nextInt();
        int[] a = new int[n];
        int m[] = new int[q];
        
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        
        for(int a0 = 0; a0 < q; a0++){
            m[a0] = in.nextInt();
        }
        solve(a, m, k);
    }
}
