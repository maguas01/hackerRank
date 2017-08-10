/*
You have an empty sequence, and you will be given queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

*/

#include <iostream>
#include <stack>


int main() {
    int n, q, num, largest = 0;
    std::stack<int> aStack;
    
    std::cin >> n;
    while (n--)
    {
        std::cin >> q;
        switch (q)
        {
            case 1 :
                std::cin >> num;
                if( !aStack.empty() )
                    largest = aStack.top() > num ? aStack.top() : num;
                else 
                    largest = num;
                aStack.push(num);
                aStack.push(largest);
                break;
            case 2 : 
                aStack.pop();
                aStack.pop();
                break;
            case 3 :
                std::cout << aStack.top() << '\n';
                break;
        }
    }
    return 0;
}
