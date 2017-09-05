/*
John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lower-case Latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a gem-element if it occurs at least once in each of the rocks.

Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.
*/

import java.util.*;

public class Gemstones {

    static int gemstones(String[] arr){
        Set<Character> s1 = new HashSet<Character>();
        Set<Character> s2 = new HashSet<Character>();
        for (int i = 0; i < arr[0].length(); i++)
            s1.add(arr[0].charAt(i));
        
        for (int i = 1; i < arr.length; i++){ 
            s2.clear();
            for(int j = 0; j < arr[i].length(); j ++){ 
                s2.add(arr[i].charAt(j));
            }
            s1.retainAll(s2); // intersection of s1 and s2
        }
        return s1.size();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] arr = new String[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.next();
        }
        int result = gemstones(arr);
        System.out.println(result);
    }
}