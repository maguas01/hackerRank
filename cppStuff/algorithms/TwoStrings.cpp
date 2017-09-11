/*
 Given two strings a, and b, determine if they share a common substring.
 */

#include <string>
#include <iostream>
#include <vector>

std::string twoStrings(std::string s1, std::string s2){
    std::vector<bool> letters(26);
    for(char c : s1)
        letters[c - 97] = 1;
    for(char c : s2)
        if(letters[c - 97] == 1)
            return "YES";
    return "NO";
}

int main() {
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s1;
        std::cin >> s1;
        std::string s2;
        std::cin >> s2;
        std::string result = twoStrings(s1, s2);
        std::cout << result << '\n';
    }
    return 0;
}
