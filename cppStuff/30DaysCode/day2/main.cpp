#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	double cost;
	int tip;
	int tax;
	
	cin >> cost;
	cin >> tip;
	cin >> tax;
	
	cost = cost + cost*tip*.01 + cost*tax*.01;

	cost = round(cost);
	cout << cost << '\n';




    return 0;
}

