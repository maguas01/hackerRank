#include <iostream>
#include <vector>
// pre - vector ar containing the instances of migratory birds along with int n the size of ar is passed to the function 
//post - returns largest instance of migratory birds
int migratoryBirds(int n, std::vector<int> & ar) {
    std::vector<int> type(5,0);
    int largest = 0;
    for(int i : ar)
        ++type[ i - 1 ];
    
    for( int i = 0; i < 5; i++ )
        largest = type[i] > type[largest] ? i : largest;  
    
    return largest + 1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++) {
       std::cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    std::cout << result << std::endl;
    return 0;
}
