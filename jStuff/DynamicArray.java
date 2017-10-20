/*
Create a list, seqList of N empty sequences, wherer each sequence is indexed from 0 to N - 1.
the elemts within each of the N sequences also use 0 indexing.

create an integer, lastAnswer, and initialize it to 0

the 2 types of queries that can be performed on your list of sequences are described below : 
	1. Query 1 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		append integer y to sequence seq
	
	2. Query 2 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		find the value of element y % size in seq (where  size is the size of seq) and assign it to lastAnswer
		print the new value of lastAnswer on a new line
		
	Given N, Q, queries, execute each query.  
*/

import java.util.*;

public class Solution {
    
    private static void functionOne(int n, int x, int y, int lastAnswer, ArrayList< ArrayList<Integer> > _arr){
        int seq = (x ^ lastAnswer) % n;
        _arr.get(seq).add(y); 
    }
    
    private static int functionTwo(int n, int x, int y, int lastAnswer, ArrayList< ArrayList<Integer> > _arr){
        int seq = (x ^ lastAnswer) % n;
        int size = _arr.get(seq).size();
        return  _arr.get(seq).get( y % size );
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        int lastAnswer = 0;
        
        ArrayList< ArrayList<Integer> > _arr  = new ArrayList< ArrayList<Integer> >(n);
        for(int i = 0; i < n; i++){
            _arr.add(new ArrayList<Integer>() );
        }
        
        while(q-->0){
            int num = in.nextInt();
            int x = in.nextInt();
            int y = in.nextInt();
            if(num == 1){
                functionOne(n, x, y, lastAnswer, _arr);
            } else { 
                lastAnswer = functionTwo(n, x, y, lastAnswer, _arr);
                System.out.println(lastAnswer);
            }
        }
    }
}