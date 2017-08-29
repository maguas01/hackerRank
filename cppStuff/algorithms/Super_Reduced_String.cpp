/*
    Steve has a string, s , consisting of n lowercase English alphabetic letters. 
    In one operation, he can delete any pair of adjacent letters with same value. 
    For example, string "aabcc" would become either "aab" or "bcc" after 1 operation.

    Steve wants to reduce s as much as possible. To do this, he will repeat the 
    above operation as many times as it can be performed. Help Steve out by finding 
    and printing 's non-reducible form!
 */

#include <iostream>
#include <string>

std::string super_reduced_string(std::string s){  
    if(s.size() == 0)
        return "Empty String";
    for(int i = 0; i < s.size() - 1; i++) { 
        if(s.at(i) == s.at(i+1)) { 
            s.erase(i,2); 
            return super_reduced_string(s);
        }   
    }
    return s;
}

int main() {
    std::string s;
    std::cin >> s;
    std::string result = super_reduced_string(s);
    std::cout << result << '\n';
    return 0;
}