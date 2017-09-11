/*
 A weighted string is a string of lowercase English letters where each letter has a weight in the inclusive range from a = 1 to z = 26
 
 Given a String s, let U be the set of weights for all the possible uniform substrings(contiguous) of string . You have to answer n queriesm where each query i
 consists of a single integer x_i. For each query, print Yes on a new line if x_i belongs to 
 U; otherwise print No instead.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void storeNumbers(std::string & s, std::vector<int> & numbers){ 
    int count = 1;
    int lastChar = - 99;
    for (int i = 0; i < s.length(); i++){
        int currChar = s[i] - 96;
        if(currChar == lastChar)
            count++;
        else
            count = 1;
        numbers[i] = ((currChar) * count);       
        lastChar = currChar;
    }
}

std::string solve(int x, std::vector<int> & numbers){
    if( std::find(numbers.begin(), numbers.end(), x) != numbers.end() )
        return "Yes";
    return "No";
}

int main(){ 
    std::string s;
    std::cin >> s;
    std::vector<int> numbers( s.length() );
    storeNumbers(s, numbers); 
    std::sort(numbers.begin(), numbers.end());
    int n;
    std::cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        std::cin >> x;
        std::cout << solve(x, numbers) << '\n';
    }
    return 0;
}