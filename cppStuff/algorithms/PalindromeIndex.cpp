/*
Given a string, S , of lowercase letters, determine the index of the character whose removal
will make S a palindrome. If S is already a palindrome or no such character exists, then
print -1. There will always be a valid solution, and any correct answer is acceptable. For
example, if S = "bcbc", we can either remove 'b' at index 0 or 'c' at index 3.
 */

#include <iostream>
#include <string>
#include <algorithm>

int palindromeIndex(std::string & s){
    int j = s.length() - 1;
    int i = 0;
    while ( i < s.length()/2) { 
        if(s.at(i) != s.at(j)) {
            if(s.at(i+1) == s.at(j) ) { // check to see if the string is symetrical
                s.erase(i,1);
                std::string reversedS = s;
                std::reverse(reversedS.begin(), reversedS.end());
                if( s == reversedS )
                    return i;
            }  
            return j;
        }
        i++;
        j--;
    }
    return -1;
}

int main() {
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s;
        std::cin >> s;
        int result = palindromeIndex(s);
        std::cout << result << '\n';
    }
    return 0;
}