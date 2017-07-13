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


int main(){
		std::string a;
		std::cin >> a;
		std::string b;
		std::cin >> b;
		std::cout << number_needed(a, b) << std::endl;
		return 0;

}

