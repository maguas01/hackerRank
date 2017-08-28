/*
Alice is playing an arcade game and wants to climb to the top of the leaderboard. Can you help her track her
 ranking as she beats each level? The game uses Dense Ranking, so its leaderboard works like this:

    The player with the highest score is ranked number on the leaderboard.
    Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately
    following ranking number.

For example, four players have the scores 100 ,90 ,90 and 80. Those players will have ranks 1, 2, 2, and 3, 
respectively. When Alice starts playing, there are already people on the leaderboard. 
The score of each player is denoted by . Alice plays for levels, and we denote her total score after 
passing each level as . After completing each level, Alice wants to know her current rank.

You are given an array scores , of monotonically decreasing leaderboard scores, and another array, alice , of 
Alice's cumulative scores for each level of the game. You must print m integers. The jth integer should indicate 
the current rank of alice after passing the jth level.
 */
 
import java.util.*;

public class ClimbingTheLeaderboard {
    
    public static void solve(int[] alice, Set<Integer> scores){
        Integer[] newScores = scores.toArray(new Integer[scores.size()] );
        int j = scores.size() - 1;
        for (int aliceScore : alice) { 
            if(j > -1) {
                while (newScores[j] <= aliceScore) { 
                    j--;
                if(j == -1)
                    break;
                }
            }
            if(j < 0){ 
                System.out.println("1");
            } else { 
                System.out.println( j + 2);
            }
        }  
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Set<Integer> scores = new TreeSet<Integer>(Collections.reverseOrder());
        for(int scores_i=0; scores_i < n; scores_i++){
            int k = in.nextInt();
            scores.add(k);
        }
        int m = in.nextInt();
        int[] alice = new int[m];
        for(int alice_i=0; alice_i < m; alice_i++){
            alice[alice_i] = in.nextInt();
        }
        solve(alice, scores);
    }
}
