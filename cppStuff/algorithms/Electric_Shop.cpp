/*
 Monica wants to buy exactly one keyboard and one USB drive from her favorite electronics store.
 The store sells different brands of keyboards and different brands of USB drives. Monica has
 exactly dollars to spend, and she wants to spend as much of it as possible (i.e., the total cost
 of her purchase must be maximal).

Given the price lists for the store's keyboards and USB drives, find and print the amount money
Monica will spend. If she doesn't have enough money to buy one keyboard and one USB drive, print 
-1 instead.

Note: She will never buy more than one keyboard and one USB drive even if she has the leftover
money to do so.
 */

#include <iostream>
#include <vector>
#include <algorithm>

int getMoneySpent(std::vector < int > keyboards, std::vector < int > drives, int s)
{
    std::sort(keyboards.begin(), keyboards.end());
    std::sort(drives.begin(), drives.end());
    int maxMoney = 0;
    for(int i = drives.size() - 1; i > -1; i--) 
    { 
        int a = drives[i];
        for(int j = 0; j < keyboards.size(); j++)
        {
            int b = keyboards[j];
            if( a + b > s )
                break;
            if( a + b > maxMoney )
                maxMoney = a + b;
        }
    }
    if(maxMoney == 0)
        return -1;
    return maxMoney;
}

int main() 
{
    int m, n, s;
    std::cin >> s >> n >> m;
    std::vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++)
       std::cin >> keyboards[keyboards_i];
    std::vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++)
       std::cin >> drives[drives_i];
    int moneySpent = getMoneySpent(keyboards, drives, s);
    std::cout << moneySpent << '\n';
    return 0;
}
