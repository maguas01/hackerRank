'''
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
 '''
 
 #!/bin/python

import sys

def solve(scores, alice) : 
    scores = list(set(scores))
    scores.sort(reverse = True)
    j = len(scores) - 1
    for a in alice : 
        if( j > -1) :
            while (scores[j] <= a) : 
                j -= 1
                if j == -1 :
                    break
        if j < 0 : 
            print "1"
        else : 
            print (j + 2)

            
def main() : 
    n = int(raw_input().strip())
    scores = map(int,raw_input().strip().split(' '))
    m = int(raw_input().strip())
    alice = map(int,raw_input().strip().split(' '))
    solve(scores, alice)
    
if __name__ == "__main__" : 
    main()