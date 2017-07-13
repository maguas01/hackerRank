
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main()
{               
		long long int subNum, sum = 0;
		string aString, subString;

		cin >> aString;

		int n = aString.size();

		for (long int k = 0; k < n ; k++)
		{
				for(long int i = 0; i < n-k;i++)
				{
						subString=aString.substr(i,k + 1);
						subNum = stoi(subString, nullptr, 0);
						sum += subNum;	
				}
		}

		cout << sum;
		return 0;

}

