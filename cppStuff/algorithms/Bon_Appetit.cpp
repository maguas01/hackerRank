#include <vector>
#include <iostream>
// pre - n number of items, k the index anna did not order, ar vector with n item where every index represents the cost of an item, and b the amount each person paid
//post - return "Bon Appetit" b is the correct amount of money anna was supposed to pay otherwise return anna's correct bill
int bonAppetit(int n, int k, int b, std::vector <int> & ar) 
{
    int sum = 0, sumMinusK;
    for (int i = 0; i < n; i++)
        sum += ar[i];
    sumMinusK = sum/2 - ar[k]/2;
    return sumMinusK == b ? -1 :b - sumMinusK;
}

int main() 
{
    int n, k, b;
    std::cin >> n >> k;
    std::vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
       std::cin >> ar[ar_i];
    std::cin >> b;
    
    int result = bonAppetit(n, k, b, ar);
    if(result == -1)
        std::cout << "Bon Appetit";
    else
        std::cout << result << '\n';
    return 0;
}