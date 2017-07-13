#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> str(n);
    for (int i = 0; i < n; i++)
        std::cin >> str[i];

    int q;
    std::cin >> q;
    std::string query;
    for (int i = 0; i < q; i++)
    {
        std::cin >> query;
        int count = 0;

        for(std::string s : str)
            if(query == s)
                count++;

        std::cout << count << '\n';
    }

    return 0;
}
