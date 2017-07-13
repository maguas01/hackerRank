#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
		    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	int value, size, index, input;
	vector<int> a;
	
	cin >> value;
	cin >> size;	
	
	for (int i = 0; i < size; i++)
	{
		cin >> input;
		a.push_back(input);
	}	

	for (size_t i = 0; i < a.size(); i++)
	{
		if(value == a[i])
				index = i;
	}
	cout << "the answer is: " << index << '\n';

		return 0;

}
