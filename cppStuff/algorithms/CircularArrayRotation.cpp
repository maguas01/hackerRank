/*
John Watson performs an operation called a right circular rotation on an array of integers,[a0, a1,..., an-1] . After performing one right 
circular rotation operation, the array is transformed from [a0, a1,..., an-1]  to [an-1, a0,...,a1].

Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position 
in the rotated array, Watson asks q queries, where each query consists of a single integer, m , for which you must print the 
element at index m in the rotated array (i.e., the value of  a_m).
*/

#include <vector>
#include <iostream>

void solve(std::vector<int> & a, std::vector<int> & m, int k){
    int i = -k; 
    while(i < 0)     // i = -k mod a.size(). i is now the zeroth index of the roated array
        i += a.size();
    
    for(int j = 0; j < m.size(); j++){
        int index = (i + m[j]) % a.size(); // (i +m[j]) % a.size() is the new index we wish to print
        std::cout << a[index] << '\n';
    }
}

int main(){
    int n;
    int k;
    int q;
    std::cin >> n >> k >> q;
    std::vector<int> a(n);   // array to be rotated
    std::vector<int> m(q);   // the indexes we wish to check
    
    for(int a_i = 0;a_i < n;a_i++)
       std::cin >> a[a_i];
        
    for(int a0 = 0; a0 < q; a0++)
        std::cin >> m[a0];
    
    solve(a, m, k);
    return 0;
}
