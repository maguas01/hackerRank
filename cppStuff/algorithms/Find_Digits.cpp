/*
 Given an integer, N , traverse its digits (d1,d2,...,dn) and
 determine how many digits evenly divide N (i.e.: count the 
 number of times divided by each digit d_i has a remainder of 0). Print the number of evenly divisible digits. 
 */

#include <iostream>

// pre - recieves int n 
//post - returns a count there count were each digit can evenly divide n
int solve(int n) 
{ 
    int count = 0, m = n;
    while ( m > 0 ) 
    {
        int lastDigit = m % 10;
        if( lastDigit != 0 )
            if( n % lastDigit == 0 )
                count++;
        m = m / 10;
    }
    return count;
}

int main(){
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        std::cin >> n;
        int m = solve(n);
        std::cout << m << '\n';
    }
    return 0;
}