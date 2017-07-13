/*********************************************
-Aguas, M
-hackerRank.com
-Sam and Sub-Strings in c++
-01JUN2017
*********************************************/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


 int main()
{               
        int subNum, sum = 0;
		vector<int> vec;
		string aString, subString;

		cin >> aString;
	
		int n = aString.size();
                
            for (int k = 0; k < n ; k++)
            {
                for(int i = 0; i < n-k;i++)
				{
				subString=aString.substr(i,k + 1);
				subNum = stoi(subString, nullptr, 0);
				cout << subNum << " ";		
				vec.push_back(subNum);
				}
           }

            for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
					sum += *it;
			
			cout << sum;
		return 0;

}

