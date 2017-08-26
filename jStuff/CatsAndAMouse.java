/*
 Two cats named and are standing at integral points on the x-axis. Cat is standing at point and cat is standing at point . Both cats run at the same speed, and they want to catch a mouse named that's hiding at integral point on the x-axis. Can you determine who will catch the mouse?

You are given queries in the form of , , and . For each query, print the appropriate answer on a new line:

    If cat A catches the mouse first, print Cat A.
    If cat B catches the mouse first, print Cat B.
    If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
*/

import java.util.*;
import java.math.*;

public class CatsAndAMouse {
    
    public static String solve(int x, int y, int z) { 
        if(Math.abs(x - z) == Math.abs(y - z))
            return "Mouse C";
        return Math.abs(x-z) < Math.abs(y-z) ? "Cat A" : "Cat B";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            int x = in.nextInt();
            int y = in.nextInt();
            int z = in.nextInt();
            System.out.println(solve(x,y,z));
        }
    }
}