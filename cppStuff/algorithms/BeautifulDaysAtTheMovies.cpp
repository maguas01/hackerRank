/*
Lili likes to play games with integers and their reversals . For some integers x, we define reversed(x)
to be the reversal of all digits in x . For example, reversed(123) = 321, reversed(21) 12, and reversed (123) = 12.

Logan wants to go to the movies with Lilly on some day x satisfying i <= x <= j, but  he konws
she only goes to the movies on days she considers to be beautiful. Lilly consdiers a day to be beautiful if the abs value 
of the difference between x and reverse(x) is evenly divisible by k.

giving i, j, k count  and print the number of beautiful days when logan and lilly can go to the movies. 
*/

#include <cmath>
#include <iostream>

typedef unsigned long long int lli;


lli reverse(lli i){
    lli reversedI = 0;
    lli number = i;
    while( number!= 0 ) {
        reversedI = reversedI * 10;
        reversedI = reversedI + number%10;
        number = number/10;
    }
    return reversedI;
}

lli solve(lli i, lli j, lli k){
    int count = 0;
    for(lli n = i; n < j + 1; n++){
        lli reversed = reverse(n);
        lli results = abs(n - reversed);
        if(results % k == 0)
            count++;
    }
    return count;
}

int main() {
    lli i, j, k;
    std::cin >> i >> j >> k;
    lli answer = solve(i,j,k);
    std::cout << answer << '\n';
    
}