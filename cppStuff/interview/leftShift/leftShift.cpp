#include <iostream>
#include <vector>

using namespace std;

// pre - passes a vector a, and integers n, k. n is the size of vector a, 
//       k is the Left rotations to perform on a
//post - returns vector a with k LEFT rotations performed

vector<int> array_left_rotation(vector<int> a, int n, int k) {
		/*
		size_t temp = 0;
		for(size_t i = 0; i < k; i++)
		{
				temp = a[0];
				for(size_t j = 0; j < a.size()-1; j++)
						a[j] = a[j+1];
				a[a.size()-1] = temp;	
		}
		*/ // works but times out;

		vector<int> temp(n);
		for(int i = 0; i < n; i++)
				temp[i] = a[(i+k)%n];

	return temp;

}


int main(){
		int n;
		int k;
		cin >> n >> k;
		vector<int> a(n);
		for(int a_i = 0;a_i < n;a_i++){
				cin >> a[a_i];

		}
		vector<int> output = array_left_rotation(a, n, k);
		for(int i = 0; i < n;i++)
				cout << output[i] << " ";
		cout << endl;
		return 0;

}

