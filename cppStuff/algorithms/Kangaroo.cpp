/*
There are two kangaroos on a number line ready to jump in the positive direction 
(i.e, toward positive infinity). The first kangaroo starts at location and moves at a rate of meters per jump. 
The second kangaroo starts at location and moves at a rate of meters per jump. Given the starting locations and 
movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?
*/
#include <iostream>

// pre - velocity and positions are passed to the funcion
//post - returns yes if kangaroos will be at some point on the same position, otherwise returns no
std::string kangaroo(int x1, int v1, int x2, int v2) 
{
    int pos1 = 0, pos2 = 0;
    if( (x1 > x2 && v1 > v2) || (x1 < x2 && v1 < v2) || (x1 == x2 && (v1 > v2 || v1 < v2) ) || ( v1 == v2  && ( x1 > x2 || x1 < x2 ) ) )       // one kangaroo never catches up with the other return no
        return "NO";
    else 
    {
        pos1 = v1 + x1;
        pos2 = v2 + x2;
        int *ahead = &(pos1 > pos2 ? pos1 : pos2);      // point to address of the kangaroo ahead
        int *notAhead = &(pos1 > pos2 ? pos2 : pos1);   // point to address of the kangaroo behind
 
        int i = 1;
        while ( 1 )
        {
            pos1 = i * v1 + x1;
            pos2 = i * v2 + x2;
            if( pos1 == pos2 )
                return "YES";
            if(*ahead < *notAhead)  // if the ahead kangaroo falls behind return no
                return "NO";
            i++;
        }
    }
}

int main() 
{
    int x1, v1, x2, v2;

    std::cin >> x1 >> v1 >> x2 >> v2;
    std::string result = kangaroo(x1, v1, x2, v2);
    std::cout << result << '\n';
    return 0;
}
