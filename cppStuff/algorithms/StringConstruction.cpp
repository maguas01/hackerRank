/*
 Amanda has a string, m , of lowercase letters that she wants to copy into a new string, p . She
 can perform the following operations any number of times to construct string p :

    Append a character to the end of string p at a cost of 1 dollar.
    Choose any substring of p and append it to the end of p at no charge.

 Given n strings (i.e., s0, s1,...,s(n-1) ), find and print the minimum cost of copying each s(i) to p(i) on a new line.
*/

#include <iostream>
#include <string>

using namespace std;

int stringConstruction(string s) {
    int count = 0;
    bool alphabet[26] = {false};
    for(char c : s)
        alphabet[c - 97] = true;
    for(bool a : alphabet)
        if(a == true) 
            count++;
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = stringConstruction(s);
        cout << result << endl;
    }
    return 0;
}
