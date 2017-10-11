/*
Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

Given an integer, n, find and print the number of letter a's in the first  n letters of Lilah's infinite string.
*/

#include <iostream>
#include <string>

long long solve(std::string s,long long n){
    
    long long count = 0;
    for(char c : s)
        if(c == 'a')
            count++;
    
    long long j = n/(s.length());
    count *= j;
    
    long long k = n % s.length();
    for(int i = 0; i < k; i++)
        if(s[i] == 'a')
            count++;
    
    return count;
}

int main(){
    std::string s;
    std::cin >> s;
    long long n;
    std::cin >> n;
    long long results = solve(s, n);
    std::cout << results << '\n';
    return 0;
}
