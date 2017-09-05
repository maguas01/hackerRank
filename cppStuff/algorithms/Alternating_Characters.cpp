/*
 You are given a string containing characters A and B only, your task is to change it into a string such that every two consecutive characters are different. To do this, you are allowed to delete one or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, string ABAA should be changed to ABA by deleting one character A. 
 */

#include <iostream>
#include <string>

int alternatingCharacters(std::string s){
    int count = 0;
    char lastChar = s.at(0);
    for (int i = 1; i < s.length(); i++) { 
        if (s.at(i) == lastChar)
            count++;
        else 
            lastChar = s.at(i);
    }
    return count;
}

int main() {
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s;
        std::cin >> s;
        int result = alternatingCharacters(s);
        std::cout << result << '\n';
    }
    return 0;
}