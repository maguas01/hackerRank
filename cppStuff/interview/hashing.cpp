/*
A kidnapper wrote a ransom note but is worried it will be traced back to him. He found a 
magazine and wants to know if he can cut out whole words from it and use them to create 
an untraceable replica of his ransom note. The words in his note are case-sensitive and 
he must use whole words available in the magazine, meaning he cannot use substrings or 
concatenation to create the words he needs.

Given the words in the magazine and the words in the ransom note, print Yes if he can 
replicate his ransom note exactly using whole words from the magazine; otherwise, print No.
*/

#include <map>
#include <vector>
#include <iostream>

using namespace std;

bool ransom_note(vector<string> & magazine, vector<string> & ransom){    
    map<string, int> mag;
    map<string, int> ran;

    for(string i : magazine)
        mag[i]++;
    for(string j: ransom)
        ran[j]++;

    for(int i = 0; i < ransom.size(); i++)
        if(mag[ ransom[i] ] < ran[ ransom[i] ])
            return false;
    
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
        cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
        cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

