/*
Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this
conspiracy from Raven and plans to lock the single door through which the enemy can enter his
kingdom.

But, to lock the door he needs a key that is an anagram of a certain palindrome string.
The king has a string composed of lowercase English letters. Help him figure out whether any
anagram of the string can be a palindrome or not.
*/

#include <iostream>
#include <string>

std::string gameOfThrones(std::string s){
    int alphabet[26] = {0};
    int odd = 0;
    for(char c : s){ 
        alphabet[c - 97]++;
    }
    for(int i : alphabet){
        odd += i % 2;
    }
    if( (s.length() % 2 == 0 && odd == 0) || (s.length() % 2 == 1 &&  odd <= 1) )
        return "YES";
    return "NO";
}

int main() {
    std::string s;
    std::cin >> s;
    std::string result = gameOfThrones(s);
    std::cout << result << '\n';
    return 0;
}
