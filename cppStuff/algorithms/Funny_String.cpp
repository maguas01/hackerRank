/*
Suppose you hava a string s of length n that is indexed from 0 - n-1. You also have some string r
that is the reverse of stirng s. s is funny if the condition : 
[|s(i) - s(i-1) |] == [|r(i) - r(i-1)|] is true for every character  i from 1 to n-1
*/

#include <bits/stdc++.h>

std::string funnyString(std::string s){
    int j = s.length() - 2;
    for(int i = 1; i < s.length(); i++){ 
        int front = std::abs( s.at(i) - s.at(i - 1) );
        int rear = std::abs( s.at(j) - s.at(j + 1) );
        if(front != rear)
            return "Not Funny";
        j--;
    }
    return "Funny";
}

int main() {
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s;
        std::cin >> s;
        std::string result = funnyString(s);
        std::cout << result << '\n';
    }
    return 0;
}