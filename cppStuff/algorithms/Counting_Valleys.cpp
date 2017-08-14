#include <iostream>
#include <string>

// pre - pass n the size of string ud
//post - returns the number of valleys  
int solve( int n, std::string & ud )
{
    int level = 0, prevLevel = 0, count = 0;
    for( int i = 0; i < n; i++ )
    {
        prevLevel = level;
        level = ud[i] == 'U' ? level + 1 : level - 1;       
        if( prevLevel == -1 && level == 0 )
            count++;
    }
    return count;
}

int main() 
{    
    std::string ud;
    int n;
    std::cin >> n >> ud;
    std::cout << solve(n, ud);
    return 0;
}