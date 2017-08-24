/*
 Given a word w rearragne the letters of w to construct another word s in such a way that s is lexicographically greater than w. In case of multiple possible answers, find the lexicographically smallest one among them. 
 */

#include <algorithm>    // std::next_permutation
#include <string>
#include <iostream>

int main() 
{
    int t;
    std::string word;
    std::cin >> t;
    while (t--)
    {
        std::cin >> word;
        if(std::next_permutation( word.begin(), word.end() ) )
            std::cout << word << '\n';
        else 
            std::cout << "no answer" << '\n';
    }
    
    return 0;
}