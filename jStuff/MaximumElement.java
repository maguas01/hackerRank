/*
You have an empty sequence, and you will be given queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

*/

import java.util.Scanner;
import java.util.Stack;


public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Stack<Integer> aStack = new Stack<Integer>();
        
        int n = in.nextInt();
        while(n-->0) { 
            int q = in.nextInt();
            int largest = 0;
            if(q == 1) { 
                int num = in.nextInt();
                if( !aStack.empty() ) { 
                    largest = aStack.peek() > num ? aStack.peek() : num;
                } else { 
                    largest = num;
                }
                aStack.push(num);
                aStack.push(largest);                      
            }  else if (q == 2) { 
                aStack.pop();
                aStack.pop();
            } else { 
                System.out.println( aStack.peek() );
            }
        }
    }
}