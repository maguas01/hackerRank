/*
 Julius Caesar protected his confidential information by encrypting it in a cipher. Caesar's cipher rotated every letter in a string by a fixed number, K , making it unreadable by his enemies. Given a string, S , and a number, K , encrypt S and print the resulting string.

Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted. 
 */


#include <string>
#include <iostream>

void solve(std::string s, int k) { 
    k %= 26;
    for (int i = 0; i < s.length(); i ++) { 
        if( 65 <= s.at(i) && s.at(i) <= 90 ) {
            if( s.at(i) + k > 90 ) { 
                std::cout << (char)( ( (s.at(i) + k) % 90) + 64 );
            } else { 
                std::cout << (char)(s.at(i) + k) ;
            }
        } else if( 97 <= s.at(i) && s.at(i) <= 122 ) { 
            if( s.at(i) + k > 122 ) { 
                std::cout << (char)( ( (s.at(i) + k) % 122 ) + 96 );
            } else { 
                std::cout << (char)( s.at(i) + k );
            }
        }
        else {
            std::cout << s.at(i);
        }   
    }
}
// (65 - 90) A - Z
// (97 - 122) a - z
int main(){
    int n, k;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cin >> k;
    solve(s,k);
    return 0;
}