/*
The median of a dataset of integers is the midpoint value of the dataset for which an equal number of 
integers are less than and greater than the value. To find the median, you must first sort your dataset of 
integers in non-decreasing order, then:

	If your dataset contains an odd number of elements, the median is the middle element of the sorted sample.
	In the sorted dataset {1, 2, 3}  2 is the median.
	
	f your dataset contains an even number of elements, the median is the average of the two middle elements 
	of the sorted sample. In the sorted dataset  {1, 2, 3, 4}(2+3)/2 = 2.5 is the median.
	
	Given an input stream of  n integers, you must perform the following task for each ith integer:
		1. add the ith integer to a running list of integers 
		2. find the median of the updated list
		3. print the list's updated median on a new line, the printed value must be double precision number 
		scaled to 1 decimal place (i.e. 12.3 format)
*/


import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Collections;

public class HeapsFindTheRunningMedian {

    public static void printMedian(Queue<Integer> bottomQ, Queue<Integer> topQ){
        double num = 0;
        if(bottomQ.size() > topQ.size()){
            num = (double)bottomQ.peek();
        } else if (topQ.size() > bottomQ.size()){
            num = (double)topQ.peek();
        } else {
            num = (double)(bottomQ.peek() + topQ.peek())/2;
        }
        System.out.printf("%.1f\n", num);
    }
    
    public static void balanceQueues(Queue<Integer> bottomQ, Queue<Integer> topQ){
        if( (int)(bottomQ.size() - topQ.size()) > 1 ){
            topQ.add(bottomQ.poll());
        }
        if( (int)(topQ.size() - bottomQ.size()) > 1 ){
            bottomQ.add(topQ.poll());
        }
    }
    
    public static void findMedians(int[] a){
        PriorityQueue<Integer> topQ = new PriorityQueue<Integer>(); // minQue 
        PriorityQueue<Integer> bottomQ = new PriorityQueue<Integer>(1  ,Collections.reverseOrder());  //maxQue
        
        bottomQ.add(a[0]);
        printMedian(bottomQ, topQ);
        
        for(int i = 1; i < a.length; i++){
            if(bottomQ.peek() < a[i]){
                topQ.add(a[i]);
            } else {
                bottomQ.add(a[i]);
            }
            balanceQueues(bottomQ, topQ);
            printMedian(bottomQ, topQ);
        }
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        findMedians(a);
    }
}
