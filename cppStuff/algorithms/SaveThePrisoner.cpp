/*
A jail has n prisoners, and each prisoner has a unique id number, s , ranging from 1 to n . There are m sweets that must be 
distributed to the prisoners.

The jailer decides the fairest way to do this is by sitting the prisoners down in a circle (ordered by ascending  s), and then, 
starting with some random s, distribute one candy at a time to each sequentially numbered prisoner until all candies are distributed. 
For example, if the jailer picks prisoner  s = 2 , then his distribution order would be (2,3,4,5,...,n-1,n,1,2,3,4,...) until all m sweets are distributed.

But wait—there's a catch—the very last sweet is poisoned! Can you find and print the ID number of the last prisoner to receive 
a sweet so he can be warned?
*/

#include <bits/stdc++.h>

int saveThePrisoner(int n, int m, int s){
    int num = (m + s - 1) % n;
    return num == 0 ? n : num;
}

int main() {
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, m, s;
        std::cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        std::cout << result << '\n';
    }
    return 0;
}