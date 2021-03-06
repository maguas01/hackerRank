/*
Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings 
to be anagrams of each other if the first string's letters can be rearranged to form the second string. 
In other words, both strings must contain the same exact letters in the same exact frequency For example, 
bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the 
minimum number of character deletions required to make the two strings anagrams. Can you help her find this 
number?

Given two strings,a  and b, that may or may not be of the same length, determine the minimum number of character 
deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.
*/

#include <iostream>
#include <string>
#include <algorithm>

int number_needed(std::string a, std::string b) 
{
	int count = 0;
	for(std::string::iterator ait = a.begin(); ait != a.end(); ++ait) 
	{
		for(std::string::iterator bit = b.begin(); bit != b.end(); ++bit) 
		{
			if(*ait == *bit)
			{
				count++;
				*ait = *bit = 0;
				break;
			}
		}				
	}
	return a.size() + b.size() -(2 * count);
}


int main()
{
	std::string a;
	std::cin >> a;
	std::string b;
	std::cin >> b;
	std::cout << number_needed(a, b) << std::endl;
	return 0;
}

