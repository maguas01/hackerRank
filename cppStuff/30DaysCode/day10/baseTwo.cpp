#include <iostream>
#include <vector>
#include <string>

std::string base2(int n);
//  pre - recieves a int number n
// post - returns a base2 string representation of n 
int count1s(std::string number);
//  pre - recieves a string which represents the number n in base 2
// post - return an int which represent the longest string of 1s in the base 2
// 		  number
int main()
{ 
	int n; 
	std::string number;

	std::cin >> n;
	number = base2(n);
	n = count1s(number);
	std::cout << n ;

	return 0;	

}


std::string base2(int n)
{
	std::string number;
	int remainder = 0;
	while (n !=  0)
	{
			remainder = n % 2;
			n = n / 2;
			if (remainder == 1)
				number = '1'+ number;
			else 
				number = '0' + number;	
	}
	return number;
}

int count1s(std::string number)
{
		int count = 0, big = 0;
		for (int i = 0; i < number.size();i++)
		{
			if(number[i] == '1')
					count++;
			else 
			{
					big = count > big ? count : big;
					count = 0;	
			}
		}
		big = count > big ? count : big;
		return big;
}
