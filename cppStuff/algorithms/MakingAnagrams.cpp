/*
 Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?

Given two strings, and , that may or may not be of the same length, determine the minimum number of character deletions required to make and anagrams. Any characters can be deleted from either of the strings.

This challenge is also available in the following translations:
 */

#include <iostream>
#include <unordered_map>
#include <string>

int absoluteVal(int a){ 
   if(a > 0)
       return a;
    return -a;
}

int makingAnagrams(std::string s1, std::string s2){
    std::unordered_map<char, int> sMap;
    int count = 0;
    for(int i = 0; i < s1.length(); i++)
        sMap[s1.at(i)]++;
    for(int i = 0; i < s2.length(); i++)
        sMap[s2.at(i)]--;
    for(auto it = sMap.begin(); it != sMap.end(); ++it)
        count += absoluteVal(it->second);
    return count;
}

int main() {
    std::string s1;
    std::cin >> s1;
    std::string s2;
    std::cin >> s2;
    int result = makingAnagrams(s1, s2);
    std::cout << result << '\n';
    return 0;
}
