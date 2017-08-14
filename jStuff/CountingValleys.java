import java.util.Scanner;

public class Solution {

    /**
    * Counts the numbers of valleys
    * @param n the size of string ud
    * @param ud string describing 
    *
    */
    static int solve(int n, String ud) { 
        int level = 0, prevLevel = 0, count = 0;
        for( char c : ud.toCharArray() ) { 
            prevLevel = level;
            level = c == 'U' ? level + 1: level - 1;
            if( prevLevel == -1 && level == 0 )
                count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String ud = in.next();
        System.out.print( solve(n, ud) );
    }
}