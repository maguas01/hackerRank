/*
Sid is obsessed with reading short stories. Being a CS student, he is doing some interesting
frequency analysis with the books. He chooses strings s1 and s2 in such a way that 
|len(s1) - len(s2)| <= 1 .

Your task is to help him find the minimum number of characters of the first string he needs
to change to enable him to make it an anagram of the second string.

Note: A word x is an anagram of another word y if we can produce y by rearranging the
letters of x.
*/

#include <string>
#include <map>
#include <iostream>
#include <algorithm>

int anagram(std::string s){
    if(s.length() % 2 == 1)
        return -1;
    std::map<char, int> letters;
    int count = 0;
    for (int i = 0; i < s.length()/2; i++) 
        letters[s.at(i)]++;
    for (int i = s.length()/2; i < s.length(); i++)
        letters[s.at(i)]--;
    for(auto it = letters.begin(); it != letters.end(); ++it)
        count += std::abs(it->second);
    
    return count/2;
}

int main() {
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s;
        std::cin >> s;
        std::cout << anagram(s) << '\n';
    }
    return 0;
}
