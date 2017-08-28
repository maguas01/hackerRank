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

#include <iostream>
#include <vector>
#include <algorithm>

void solve(std::vector<int> & scores, std::vector<int> & alice) {    
    auto it = std::unique(scores.begin(), scores.end());                                                            
    scores.resize( std::distance(scores.begin(),it) ); 
    int j = scores.size()-1;
    for (int i = 0; i < alice.size(); i++) { 
        while( scores[j] <= alice[i] ){ 
            j--;
        }
        if(j < -1)
            std::cout << 1 << '\n';
        else 
            std::cout << j + 2 << '\n';
    }
    
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       std::cin >> scores[scores_i];
    }
    int m;
    std::cin >> m;
    std::vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       std::cin >> alice[alice_i];
    }
    solve(scores, alice);
    return 0;
}
