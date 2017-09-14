/*
Sherlock considers a string, s , to be valid if either of the following conditions are satisfied:
    1. All characters in s have the same exact frequency (i.e., occur the same number of times). For example, s = "aabbcc" is valid, but s = "baacdd" is not valid.
    
    2. Deleting exactly 1 character from will result in all its characters having the same frequency. For example, s "aabbccc" and s = "aabbc" are valid because all their letters will
    have the same frequency if we remove 1 occurrence of c, but s = "abccc" is not valid because we'd need to 3 remove characters.

Given s, can you determine if it's valid or not? If it's valid, print YES on a new line; otherwise, print NO instead.
 */

#include <string>
#include <iostream>
#include <limits>

bool sameLetters(int (&alphabet)[26]){
    int lastNum = alphabet[0];
    for(int i = 1; i < 26; i++){
        if(alphabet[i] != lastNum && alphabet[i] != 0 ) 
            return false;
        if(alphabet[i] != 0)
            lastNum = alphabet[i];
    }
    return true;
}

std::string isValid(std::string s){
    int alphabet[26] = {0};
    for(char c : s)
        alphabet[c - 97]++;
    bool isTrue = sameLetters(alphabet);
    if(isTrue)
        return "YES";
    // find the smallest and largest index
    int largest =  std::numeric_limits<int>::min();
    int smallest = std::numeric_limits<int>::max();
    int largestIndex = -99;
    int smallestIndex = 99;
    for(int i = 0; i < 26; i++){
        if(alphabet[i] > largest){
            largest = alphabet[i];
            largestIndex = i;
        }
        if(alphabet[i] < smallest && alphabet[i] != 0 ){
            smallest = alphabet[i];
            smallestIndex = i;
        }     
    }
    // remove 1 from the largest index and check
    alphabet[largestIndex] -= 1;
    isTrue = sameLetters(alphabet);
    if(isTrue)
        return "YES";
    alphabet[largestIndex] += 1;
    // remove 1 from the smallest index and check  
    alphabet[smallestIndex] -= 1;
    isTrue = sameLetters(alphabet);
    if(isTrue)
        return "YES";
    return "NO";
}

int main() {
    std::string s;
    std::cin >> s;
    std::string result = isValid(s);
    std::cout << result << '\n';
    return 0;
}