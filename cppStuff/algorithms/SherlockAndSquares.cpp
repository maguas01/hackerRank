/*
Watson gives two integers ( a and b ) to Sherlock and asks if he can count the number of square integers between and 
(a both b inclusive).
*/

#include <iostream>

// use the fact that (n+1)^2 - n^2 = 2n + 1 => n^2 + 2n + 1 = (n+1)^2 then we can simply just count from 0 - > b 
// increament a count every time any n falls in between  [a, b]
int solve(int a,int b){
    int n = 0, k = 0, i = 0, count = 0;
    while (n < b+1){            //stop when nth square root is larger than b
        k = 2 * i + 1;          //  generate 2n+1 
        n = n + k;              // add it to the previous square start at 0^2 = 0
        if( a <= n && n <= b )  // if square belongs to [a, b] increment the count
            count++;
        i++;               
    }
    return count;
}

int main() {
    int testCase, a, b;
    std::cin >> testCase;
    while(testCase--){
        std::cin >> a >> b;
        int results = solve(a, b);
        std::cout << results << '\n';
    }
    return 0;
}