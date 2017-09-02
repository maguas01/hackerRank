/*
 We say that a string, s , contains the word hackerrank if a subsequence of the characters in spell the word hackerrank. For example, haacckkerrannkk does contain hackerrank, but haacckkerannk does not (the characters all appear in the same order, but it's missing a second r).

More formally, let p0, p1, ..., p9 be the respective indices of h, a, c, k, e, r, r, a, n, k in string s . If  p0 < p1 < ... < p9 is true, then s contains hackerrank.

You must answer q queries, where each query consists of a string, . For each query, print YES on a new line if s contains hackerrank; otherwise, print NO instead.
 */


#include <iostream>
#include <string>

std::string solve(std::string s){ 
    char h[] = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    int i = 0;
    for (char c : s){
        if(c == h[i]) 
            i++;
        if(i > 9)
            return "YES";
    }
    return "NO";
}

int main(){
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        std::string s;
        std::cin >> s;
        std::cout << solve(s) << '\n';
    }
    return 0;
}