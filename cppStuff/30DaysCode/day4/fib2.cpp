#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
		int n, fib = 0, t1 = 0, t2 = 1;	
		cin >> n;
		
		for (int i = 2 ; i < n; i++)
		{
			fib = t1 + t2 * t2;
			t1 = t2;
			t2 = fib;
		}	
	
		cout << fib;

		return 0;

}
