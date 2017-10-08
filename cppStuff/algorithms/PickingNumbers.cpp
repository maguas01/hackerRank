/*
Given an array of integers, find and print the maximum number of integers you can select from the array 
such that the absolute difference between any two of the chosen integers is .<= 1
*/

#include <vector>
#include <iostream>

int solve(std::vector<int> & a){
    int largest = 0;
    for(int i = 0; i < a.size(); i++){
        int count = 0;
        for(int j = 0; j < a.size(); j++){
            if( a[j] + 1 == a[i] || a[j] == a[i] )
                count++;
        }
        if(count > largest)
            largest = count;
    }
    return largest;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       std::cin >> a[a_i];
    }
    int results = solve(a);
    std::cout << results << '\n';
    return 0;
}
