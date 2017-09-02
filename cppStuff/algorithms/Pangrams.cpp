/*
 Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.
 */

#include <iostream>
#include <string>
#include <set>
#include <cctype> //tolower

std::string solve(std::string s){ 
    std::set<char> alphabet;
    for(int i = 0; i < s.length(); i++ ){ 
        char c = tolower(s[i]);
        if( 97 <= c && c <= 122 )
            alphabet.insert(c);
    }
    if(alphabet.size() == 26)
        return "pangram";
    return "not pangram";
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << solve(s) << '\n';
    return 0;
}