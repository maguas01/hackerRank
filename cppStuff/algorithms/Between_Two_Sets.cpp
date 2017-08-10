#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector <int> a, vector <int> b, int largest) 
{
    int count = 0;
    bool inBetween = true;
    
    for (int i = 1; i < largest + 1; i++) 
    {
        inBetween = true;
        for( int j = 0; j < a.size(); j++ ) 
        {
            if( i % a[j] != 0 || !inBetween ) 
            {
                inBetween = false;
                break;
            }
        }
        for( int k = 0; k < b.size(); k++ ) 
        {
            if(  b[k] % i != 0 || !inBetween ) 
            {
                inBetween = false;
                break;
            }   
        }
        if(inBetween)
            count++;
    }
    return count;
}

int main() 
{
    int n;
    int m;
    int largest = 0;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
       cin >> a[a_i];
       largest = largest > a[a_i] ? largest : a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++)
    {
       cin >> b[b_i];
       largest = largest > b[b_i] ? largest : b[b_i];
    }
    int total = getTotalX(a, b, largest);
    cout << total << endl;
    return 0;
}
