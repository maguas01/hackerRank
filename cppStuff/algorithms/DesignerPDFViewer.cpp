/*
	In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times 
	the width of a letter, and the height is the maximum height of any letter in the word.
	
	Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. 
	Given the height of each letter in millimeters (mm), find the total area that will be highlighted by blue 
	rectangle in mm^2 when the given word is selected in our new PDF viewer.
	*/

#include <iostream>
#include <vector>
#include <string>

int solve(std::vector<int> & h, std::string word){
    int largest = -99;
    for(char c : word){
        if(h[c - 'a'] > largest)
            largest = h[c-'a'];
    }
    return largest * word.length();
}

int main(){
    std::vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       std::cin >> h[h_i];
    }
    std::string word;
    std::cin >> word;
    
    int answer = solve(h, word);
    std::cout << answer << '\n';
    
    return 0;
}