/*
you are given a sequence of n integers p(1), p(2), ..., p(n). Each element in the sequence is distint and 
satisfies 1 < p(x) <= n. For each x where 1 <= x <= n, find any integer y such that p(p(y)) congruent to x
and print the value of y on a new line. 
*/

#include <map>
#include <iostream>

void solve(std::map<int, int> & aMap){
    for(int i = 0; i < aMap.size(); i++){
        int num = aMap[i+1];
        std::cout << aMap[num] << '\n';
    }
}

int main() {
    std::map<int, int> aMap;
    int n;
    std::cin >> n ;
    for(int i = 1; i < n + 1; i ++){
        int q;
        std::cin >> q;
        aMap[q] = i;
    }

    solve(aMap);
    return 0;
}