/*
 Two cats named and are standing at integral points on the x-axis. Cat is standing at point and cat is standing at point . Both cats run at the same speed, and they want to catch a mouse named that's hiding at integral point on the x-axis. Can you determine who will catch the mouse?

You are given queries in the form of , , and . For each query, print the appropriate answer on a new line:

    If cat A catches the mouse first, print Cat A.
    If cat B catches the mouse first, print Cat B.
    If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
 */

#include <iostream>
#include <algorithm>

std::string solve(int x, int y, int z) 
{ 
    if (std::abs(x - z) ==  std::abs(y - z))
        return "Mouse C";
    return std::abs(x - z) < std::abs(y - z) ? "Cat A" : "Cat B";
}

int main()
{
    int q, x, y, z;
    std::cin >> q;
    for(int a0 = 0; a0 < q; a0++) 
    {
        std::cin >> x >> y >> z;
        std::cout << solve(x, y, z) << '\n';
    }
    return 0;
}