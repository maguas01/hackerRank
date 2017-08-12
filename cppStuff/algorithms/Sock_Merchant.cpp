#include <map>
#include <vector>
#include <iostream>

//  pre - pass n the number of socks
//post - returns a vector containing n socks
std::vector<int> input(int n)
{
    std::vector<int> a(n);
    for(int i = 0; i < n; i++)
        std::cin >> a[i];
    return a;
}

// pre - pass n the size of the vector and ar the socks
//post - returns the number matching socks
int sockMerchant(int n, std::vector <int> ar)
{
    int count = 0;
    std::map<int, int> aMap;
    for(int i : ar)
    {
        aMap[i]++;
        if(aMap[i] > 1 && aMap[i] % 2 == 0)
            count++;
    }
    return count;
}

int main() 
{
    int n;
    std::cin >> n;
    std::vector<int> ar = input(n);
    std::cout << sockMerchant(n, ar) << '\n';
    return 0;
}
