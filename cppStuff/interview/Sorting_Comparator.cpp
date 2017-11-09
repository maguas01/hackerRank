/*
Comparators are used to compare two objects. In this challenge, you'll create a comparator and use it to 
sort an array. The Player class is provided in the editor below; it has two fields:
	1. string name
	2. int score

Given an array of  n Player objects, write a comparator that sorts them in order of decreasing score; if  2 or more 
players have the same score, sort those players alphabetically by name. To do this, you must create a Checker 
class that implements the Comparator interface, then write an int compare(Player a, Player b) method 
implementing the Comparator.compare(T o1, T o2) method.
*/
#include <vector>
#include <iostream>
#include <algorithm>

struct Player 
{
    std::string name;
    int score;
    bool operator<(const Player & rhs) const 
    { 
        if(this->score == rhs.score)
        {
            return this->name < rhs.name;
        }
        return rhs.score < this->score;
    }
}; 

int main() 
{    
    int n;
    std::cin >> n;
    std::vector< Player > players;
    std::string name;
    int score;
    for(int i = 0; i < n; i++)
    {
        std::cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    std::sort(players.begin(), players.end());
    for(int i = 0; i < players.size(); i++) 
        std::cout << players[i].name << " " << players[i].score << '\n';
    return 0;
}
