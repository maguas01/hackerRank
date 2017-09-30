/*
 A Discrete Mathematics professor has a class of N students. Frustrated with their lack of
 discipline, he decides to cancel class if fewer than K students are present when class starts.
 
 Given the arrival time of each student, determine if the class is canceled.
 */

#include <vector>
#include <iostream>
#include <string>

std::string solve(std::vector<int> & a, int k){
    int count = 0;
    for(int time : a)
        if(time <= 0)
            count++;
    
    if(count < k)
        return "YES";
    return "NO";
        
}

int main(){
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        
        for(int a_i = 0;a_i < n;a_i++){
           std::cin >> a[a_i];
        }
        
        std::string answer = solve(a, k);
        std::cout << answer << '\n';
    }
    return 0;
}
