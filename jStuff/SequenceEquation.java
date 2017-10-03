/*
you are given a sequence of n integers p(1), p(2), ..., p(n). Each element in the sequence is distint and 
satisfies 1 < p(x) <= n. For each x where 1 <= x <= n, find any integer y such that p(p(y)) congruent to x
and print the value of y on a new line. 
*/

import java.util.*;

public class Solution {
    public static void solve(Map<Integer, Integer> m){
        for(int i = 0; i < m.size(); i++){
            int num = m.get(i+1);
            num = m.get(num);
            System.out.println(num);
        }
    }
    
    public static void main(String args[] ) throws Exception {
        Scanner in = new Scanner(System.in);
        Map<Integer, Integer> m = new HashMap<Integer, Integer>();
        int n = in.nextInt();
        for(int i = 1; i < n + 1; i++){
            int q = in.nextInt();
            m.put(q, i);
        }
        solve(m);
    }
}