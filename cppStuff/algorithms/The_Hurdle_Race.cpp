/*
Dan is playing a video game in which his charecter competes in a hurdle race by jumping over
n hurdles with h_0, h_1, ... h_(n-1) He can initially jimp a maximum height of k units. but he 
has an unlimited supply of magic beverages thta help him jump higher! Each time Dan drinks a magic 
beverage, the maximum height he can jump during the race increases by 1 units

Given n,k. and the heights of all the hurdles, find and print the minumum number of magic beverages 
Dan must drink to complete the race.
*/

#include <iostream>
#include <vector>

int solve(int k, std::vector<int> height) { 
    int tallest = 0;
    for( int h: height ) { 
        if( h > tallest ) { 
            tallest = h;
        }
    }
    return tallest - k > 0 ? tallest - k : 0;
}

int main(){
    int n;
    int k;
    std::cin >> n >> k;
    std::vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       std::cin >> height[height_i];
    }
    std::cout << solve(k, height) << '\n';
    return 0;
}