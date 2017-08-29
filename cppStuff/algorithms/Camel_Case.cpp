/*
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

    It is a concatenation of one or more words consisting of English letters.
    All letters in the first word are lowercase.
    For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given , print the number of words in on a new line.
*/

#include <iostream>
#include <string>

int solve(std::string s){ 
    int wordCount = 0;
    for (int i = 0; i < s.length(); i++) {
        int charToInt = (int) (s.at(i));
        if( charToInt < 97 )
           wordCount++;
    }
    return wordCount + 1;
}

int main(){
    std::string s;
    std::cin >> s;
    std::cout << solve(s) << '\n';
    return 0;
}