#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(size_t x,size_t y)
{
		size_t temp;
		temp = x;
		x = y;
		y = temp;

}

void insertionSort(vector <int>  ar)
{
		for(size_t i = 1 ; i <ar.size();i++ )
		{
				size_t j =i;
				while(j > 0 && ar[j-1] > ar[j] )
				{
						swap(ar[j],ar[j-1]);
						j -=1;
				}
		}


}
int main(void) {
		vector <int>  _ar;
		int _ar_size;
		cin >> _ar_size;
		for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
				int _ar_tmp;
				cin >> _ar_tmp;
				_ar.push_back(_ar_tmp); 

		}

		insertionSort(_ar);
		for(vector<int>::iterator it = _ar.begin(); it != _ar.end();++it)
				cout << *it << " ";
		cout << '\n';

		return 0;

}

