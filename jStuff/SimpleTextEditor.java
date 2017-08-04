/*
In this challenge, you must implement a simple text editor. Initially, your editor contains an empty string, 
. You must perform  operations of the following  types:
1
.append - Append string to the end of .
2. delete- Delete the last characters of .
3. print - Print the character of .
4. undo- Undo the last (not previously undone) operation of type  or , reverting  to the state it
was in prior to that operation
*/

import java.util.Scanner;
import java.util.Stack;

public class Solution 
{
    public static void main(String[] args) 
    {
        Stack<String> aStack = new Stack();
        String s = "", word = "";
        int ss = 0;
        Scanner in = new Scanner(System.in);
        
        int q = in.nextInt();
        while(q-->0)
        {
            int k = in.nextInt();
            switch (k)
            {
                case 1 :
                    s = in.next();
                    word = aStack.empty() ? word + s : aStack.peek() + s;
                    aStack.push(word);
                    break;
                case 2 : 
                    ss = in.nextInt();
                    word = aStack.peek().substring(0, aStack.peek().length() - ss );
                    aStack.push(word);
                    break;
                case 3 : 
                    ss = in.nextInt();
                    System.out.println(aStack.peek().charAt(ss - 1));
                    break;
                case 4 : 
                    aStack.pop();
                    word = aStack.empty() ? "" : aStack.peek();
                    break;
            }    
        }
    }
}