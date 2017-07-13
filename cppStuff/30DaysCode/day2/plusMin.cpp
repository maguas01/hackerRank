#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
	double neg = 0, pos = 0, zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
	       cin >> arr[arr_i];
	    }

   for(int i = 0; i < n ; i++)	
	{
			if(arr[i]>  0){
				pos += 1.0;
			}
			else if(arr[i]< 0){
				neg += 1.0;
			}
			else{ 
				zero += 1.0;
			}
	}

	pos = pos/(double)n;
	neg = neg/(double)n;
	zero = zero/(double)n;
	cout << fixed;
	cout << pos << "\n" << neg << "\n" << zero ;

	return 0;
}

