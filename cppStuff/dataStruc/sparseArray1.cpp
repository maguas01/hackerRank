#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<std::string, int> aMap;
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;
        aMap[str]++;
    }

    int q;
    std::cin >> q;
    for(int i = 0; i < q; i++)
    {
        std::string query;
        std::cin >> query;

        std::cout << aMap[query] << '\n'; 
    }



    return 0;
}
