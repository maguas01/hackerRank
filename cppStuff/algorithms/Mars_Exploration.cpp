/*
Sami's spaceship crashed on Mars! She sends n sequential SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, S , determine how many letters of Sami's SOS have been changed by radiation.
 */

#include <string>
#include <iostream>

int solve(std::string s) { 
    int count = 0;
    for(int i = 0; i < s.length(); i++){ 
        int k = i % 3;
        if( (k == 0 || k == 2) && s[i] != 'S')
            count++;
        if( k == 1 && s[i] != 'O')
            count++;
    }
    return count;
}

int main(){
    std::string s;
    std::cin >> s;
    
    std::cout << solve(s) << '\n';
    return 0;
}
