#include <iostream>

/*
 *  *Algorithmic Crush
 *   
 * You are given a list of size , initialized with zeroes. You have to perform operations on
 * the list and output the maximum of final values of all the elements in the list. For 
 * every operation, you are given three integers , and and you have to add value to all 
 * the elements ranging from index to (both inclusive).
 *        
 * Input Format
 *          
 * First line will contain two integers and separated by a single space.
 * Next lines will contain three integers , and separated by a single space.
 * Numbers in list are numbered from to . 
 */
typedef long long int lint;
lint arr[10000001];

int main()
{
    lint n,m,a,b,k, largest = 0, sum = 0 ;
    std::cin >> n >> m ;

    for(int j = 0; j < m; j++) 
    {
        std::cin >> a >> b >> k;
        arr[a] += k;
        if(b+1 <= n)
            arr[b+1] -= k;
    }

    for (lint i : arr)
    {
        sum += i;
        largest = sum > largest ? sum : largest;
    }

    std::cout << largest;

    return 0;
}

