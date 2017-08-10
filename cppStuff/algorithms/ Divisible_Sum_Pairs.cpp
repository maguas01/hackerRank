#include <vector>
#include <iostream>

// pre - vector ar a vector with elements,int n the number of elements in ar, and int k is 
//       passed to the functinon
//post - returns an int count, the number of tuples in ar whose sum is divisible by k
int divisibleSumPairs(int n, int k, std::vector <int> ar) 
{
    int count = 0;
    for ( int i = 0; i < ar.size(); i++ )  
        for ( int j = i + 1; j < ar.size(); j++ ) 
            if ( (ar[i] + ar[j]) % k == 0 )
                count++; 
    return count;
}

int main() 
{
    int n;
    int k;
    std::cin >> n >> k;
    std::vector<int> ar(n);
    for( int ar_i = 0; ar_i < n; ar_i++ )
       std::cin >> ar[ar_i];
    int result = divisibleSumPairs(n, k, ar);
    std::cout << result << '\n';
    return 0;
}