/*
 Alice has a binary string, B , of length n. She thinks a binary string is beautiful if and only if it doesn't contain the substring "010".

In one step, Alice can change a 0 to a 1 (or vice-versa). Count and print the minimum number of steps needed to make Alice see the string as beautiful.
 */

#include <iostream>
#include <string>

int minSteps(int n, std::string b){
    int count = 0, i = 0;
    while ( i < b.length() - 2 ){
        if( b[i] == '0' && b[i+1] == '1' && b[i+2] == '0'){ 
            count++;
            i += 3;
        } else {
            i++;
        }     
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::string b;
    std::cin >> b;
    int result = minSteps(n, b);
    std::cout << result << '\n';
    return 0;
}