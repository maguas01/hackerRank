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
#include <cassert>
#include <vector>
#include <iostream>

struct Player 
{
    std::string name;
    int score;
	// pre - player a does is not  null
	//post - returns true if  this < player a
    bool operator<(const Player & a) const
    {
        if(this->score == a.score)
            return this->name < a.name;
        return a.score < this->score;
    }
	// pre - player a is not null
	//post - returns true if this > player a
    bool operator>(const Player & a) const
    {
        if(this->score == a.score)
            return this->name > a.name;
        return a.score > this->score;
    }
	// pre - player a is not null
	//post - returns true if this equal player a
    bool operator==(const Player a) const
    {
        return this->score == a.score && this->name == a.name;
    }
	// pre - player a is not null
	//post - returns a deep copy of this player
    Player operator=(const Player a) 
    {
        this->name = a.name;
        this->score = a.score;
        return *this;
    }
}; 
// pre - vector players size > 1
//post - swaps index left , right in vector players
void swap(std::vector<Player> & players, int left, int right)
{
    Player *temp = new Player();
	assert(temp != NULL);
    *temp = players[left];
    players[left] = players[right];
    players[right] = *temp;
	delete temp;
}
// pre - vector players > 1
//post - returns the left index which is used to partitoin vector players , sorts each sub partition
int partition(std::vector<Player> & players, int left, int right, Player & pivot)
{
    while(left <= right)
    {
        while(players[left] < pivot)
            left++;
        while(players[right] > pivot)
            right--;
        if(left <= right)
        {
            swap(players, left, right);
            left++;
            right--;
        }
    }
    return left;
}
// pre - vector players is not empty
//post - partitions vector players into a left and right side 
void quickSort(std::vector<Player> & players, int left, int right)
{
    if( left >= right)  // if the left index > or = to the right index there is nothing to do  
        return;
    Player pivot = players[(left+right) / 2];         //choose a pivot in the center
    int index = partition(players, left, right, pivot);
    quickSort(players, left, index - 1);
    quickSort(players, index, right);
}
// pre - vector players is not null
//post - calls the recursive function quicksor
void quickSort(std::vector<Player> & players)
{
    quickSort(players, 0, players.size()-1);
}

int main() {
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
    quickSort(players);
    for(int i = 0; i < players.size(); i++) 
        std::cout << players[i].name << " " << players[i].score << '\n';
    return 0;
}
