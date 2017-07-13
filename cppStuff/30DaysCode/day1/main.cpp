#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
  	 string s = "HackerRank ";
    int _int;
    double _double;
    string _string;

    cin >> _int;
    
    cin >> _double;
 	cin.ignore(); 
   getline(cin, _string);
    
    _int +=i;
    cout << _int <<'\n';
    _double += d;
    cout << _double << '\n';
    s = s + _string;
    cout << s << "\n";
    
    
	return 0;
}
