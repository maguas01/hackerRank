#include <bits/stdc++.h>

std::vector < int > getRecord(std::vector < int > s)
{
    int low = s[0];
    int high = low; 
    std::vector<int> r(2);
    
    for(int i : s)
    {
        if (i > high)
        {
            r[0]++;
            high = i;
        }
        if (i < low)
        {
            r[1]++;
            low = i;
        }
    }
    return r;
}

int main() 
{
    int n;
    std::cin >> n;
    std::vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++)
    {
       std::cin >> s[s_i];
    }
    std::vector < int > result = getRecord(s);
    std::string separator = "", delimiter = " ";
    for(auto val: result) 
    {
        std::cout<<separator<<val;
        separator = delimiter;
    }
    std::cout<< std::endl;
    return 0;
}