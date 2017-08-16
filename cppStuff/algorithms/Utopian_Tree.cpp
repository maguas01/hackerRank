#include <cmath>
#include <iostream>

// pre - n, the number of cycles is passed to this function
//post - returns the tree height after n cycles
int solve(int n)
{
    int nth = (n/2) + 1;
    if ( n%2 == 1 )
        return  2 * ( pow(2, nth  ) - 1 ) ;
    return pow( 2, nth ) -1;
}

int main()
{
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        std::cin >> n;
        std::cout << solve(n) << '\n';
    }
    return 0;
}