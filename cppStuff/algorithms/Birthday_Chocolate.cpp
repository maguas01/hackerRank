#include <iostream>
#include <vector>

// pre - vector s, int d and m are passed to the fucntion 
//post - returns the number of times d can be summed using consecutive m indexes
int solve(int n, std::vector < int > s, int d, int m)
{
    int count = 0, sum;
    for( int i = 0; i < s.size() - m + 1; i++)
    {
        sum = 0;
        for (int j = i; j < i + m; j++)
            sum += s[j];
        if( sum == d )
            count++;
    }
    return count;
}

int main() 
{
    int n, d, m;
    std::cin >> n;
    std::vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++)
       std::cin >> s[s_i];
    
    std::cin >> d >> m;
    int result = solve(n, s, d, m);
    std::cout << result << '\n';
    return 0;
}
