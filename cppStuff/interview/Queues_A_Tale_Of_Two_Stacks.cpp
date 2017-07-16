/*
   A queue is an abstract data type that maintains the order in which elements were 
   added to it, allowing the oldest elements to be removed from the front and new elements to 
   be added to the rear. This is called a First-In-First-Out (FIFO) data structure because 
   the first element added to the queue (i.e., the one that has been waiting the longest) 
   is always the first one to be removed.

   A basic queue has the following operations:

Enqueue: add a new element to the end of the queue.
Dequeue: remove the element from the front of the queue and return it.

In this challenge, you must first implement a queue using two stacks. Then process 
queries, where each query is one of the following types:

1 x: Enqueue element into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the element at the front of the queue.
*/

#include <iostream>
#include <stack>

class MyQueue 
{
    public:
        std::stack<int> stackIn, stackOut;

        void push(int x) 
        {
            stackIn.push(x);
        }

        void pop() 
        {
            if( !stackOut.empty() )
                stackOut.pop();
            else
            {
                while( !stackIn.empty() )
                {
                    stackOut.push( stackIn.top() );
                    stackIn.pop();
                }
                stackOut.pop();
            }
        }

        int front() 
        {
            if( !stackOut.empty() )
                return stackOut.top();
            else
            {
                while( !stackIn.empty() )
                {
                    stackOut.push( stackIn.top() );
                    stackIn.pop();
                }
                return stackOut.top();
            }
        }
};

int main() 
{
    MyQueue q1;
    int q, type, x;
    std::cin >> q; 
    for(int i = 0; i < q; i++) 
    {
        std::cin >> type;
        if(type == 1) 
        {
            std::cin >> x;
            q1.push(x);
        }
        else if(type == 2) 
            q1.pop();
        else 
            std::cout << q1.front() << std::endl;
    }
    return 0;
}
