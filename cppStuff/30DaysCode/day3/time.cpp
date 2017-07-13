#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
		string time, sub;
		static const string arr[] = {"13", "14", "15", "16", "17" , "18", "19","20" , "21", "22", "23", "24" };
		vector<string> conv(arr, arr + sizeof(arr)/sizeof(arr[0]))  ;
		cin >> time;

		if(time.at(8)== 'A' && time.at(9) == 'M')	
		{
				time.erase(8,2);
		}
		else
		{
				time.erase(8,2);
				if(time.substr(0,2) == "01")
				{
						time.erase(0,2);
						time.insert(0, conv[0]);
				}

				else if(time.substr(0,2) == "02")
				{
						time.erase(0,2);
						time.insert(0, conv[1]);
				}
	
				else if(time.substr(0,2) == "03")
				{
						time.erase(0,2);
						time.insert(0, conv[2]);
				}

				else if(time.substr(0,2) == "04")
				{
						time.erase(0,2);
						time.insert(0, conv[3]);
				}

				else if(time.substr(0,2) == "05")
				{
						time.erase(0,2);
						time.insert(0, conv[4]);
				}

				else if(time.substr(0,2) == "06")
				{
						time.erase(0,2);
						time.insert(0, conv[5]);
				}

				else if(time.substr(0,2) == "07")
				{
						time.erase(0,2);
						time.insert(0, conv[6]);
				}

				else if(time.substr(0,2) == "08")
				{
						time.erase(0,2);
						time.insert(0, conv[7]);
				}

				else if(time.substr(0,2) == "09")
				{
						time.erase(0,2);
						time.insert(0, conv[8]);
				}

				else if(time.substr(0,2) == "10")
				{
						time.erase(0,2);
						time.insert(0, conv[9]);
				}

				else if(time.substr(0,2) == "11")
				{
						time.erase(0,2);
						time.insert(0, conv[10]);
				}

				else if(time.substr(0,2) == "12")
				{
						time.erase(0,2);
						time.insert(0, conv[11]);
				}

		}

		cout << time << '\n';
		return 0;

}
