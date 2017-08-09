/*Sam's house has an apple tree and an orange tree that yield an abundance of fruit. In the diagram below, 
the red region denotes his house, where is the start point and is the end point. The apple tree is to the left of 
his house, and the orange tree is to its right. You can assume the trees are located on a single point, where the 
apple tree is at point and the orange tree is at point . 
When a fruit falls from its tree, it lands units of distance from its tree of origin along the -axis. A negative 
value of means the fruit fell units to the tree's left, and a positive value of means it falls units to the tree's 
right.

Given the value of for apples and oranges, can you determine how many apples and oranges will fall on Sam's house 
(i.e., in the inclusive range )? Print the number of apples that fall on Sam's house as your first line of output,
 then print the number of oranges that fall on Sam's house as your second line of output. */


#include <iostream>

int main()
{
    int s, t, a, b, m, n, appleCount = 0, orangeCount = 0, temp0 = 0, temp1 = 0;
   
    std::cin >> s >> t >> a >> b >> m >> n;

    for(int apple_i = 0;apple_i < m;apple_i++)
    {
       std::cin >> temp0;
       temp0 += a;
       if(s <= temp0 && temp0 <= t)
           appleCount++;
    }
    
    for(int orange_i = 0;orange_i < n;orange_i++)
    {
        std::cin >> temp1;
        temp1 += b;
        if(s <= temp1 && temp1 <= t)
           orangeCount++;
    }
    std::cout << appleCount << '\n' << orangeCount;
    return 0;
}