/*
 James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows two rules:

    He can reduce the value of a letter, e.g. he can change d to c, but he cannot change c to d.
    In order to form a palindrome, if he has to repeatedly reduce the value of a letter, he can do it until the letter becomes a. Once a letter has been changed to a, it can no longer be changed.

Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.
 */

#include <iostream>
#include <string>

int theLoveLetterMystery(std::string s)
{
    int j = s.length()-1, i = 0, count = 0;   
    while( i< s.length()/2 )
    { 
        if(s.at(i) < s.at(j)) 
        { 
            while(s.at(i) < s.at(j))
            { 
                s.at(j)--;
                count++;
            }
        } 
        else if (s.at(i) > s.at(j)) 
        { 
            while(s.at(i) > s.at(j))
            { 
                s.at(i)--;
                count++;
            }
        }  
        i++;
        j--;
    }
    return count;
}

int main() 
{
    int q;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++)
    {
        std::string s;
        std::cin >> s;
        int result = theLoveLetterMystery(s);
        std::cout << result << '\n';
    }
    return 0;
}
