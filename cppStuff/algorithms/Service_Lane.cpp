/*
 Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway. The length of the service lane is N units. The service lane consists of N segments of equal length and different width.

Calvin can enter to and exit from any segment. Let's call the entry segment as index and the exit segment as index . Assume that the exit segment lies after the entry segment (i < j) and 0 <= i . Calvin has to pass through all segments from index to index (both inclusive).
 */

#include <vector>
#include <iostream>


// pre - pass i, j, width where i is the entrance lane j is the exit lane and width contains the widths of the lanes
//post - retuns the largest size vehicle which can pass through entrance i and exit j
int solve(int i, int j, std::vector<int> & width) { 
    int smallest = width[i];
    for(int k = i + 1; k < j + 1; k++)
        if(width[k] < smallest)
            smallest = width[k];
    return smallest;
}
    
int main(){
    int n, t;
    std::cin >> n >> t;
    std::vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++)
       std::cin >> width[width_i];
    
    for(int a0 = 0; a0 < t; a0++){
        int i, j;
        std::cin >> i >> j;
        std::cout << solve(i, j, width) << '\n';
    }
    return 0;
}