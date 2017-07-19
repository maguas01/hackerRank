/*
   Given pointers to the head nodes of linked lists that merge together at some point, 
   find the Node where the two lists merge. It is guaranteed that the two head Nodes 
   will be different, and neither will be NULL.

   In the diagram below, the two lists converge at Node x:

   [List #1] a--->b--->c
   \
   x--->y--->z--->NULL
   /
   List #2] p--->q

   complete the int FindMergeNode(Node* headA, Node* headB) 
   method so that it finds and returns the data value of the Node where the two lists merge. 
   */

#include <map>
/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
   int data;
   Node* next;
   }
   */
int FindMergeNode(Node *headA, Node *headB)
{
    Node* currentA = headA, *currentB = headB;
    map<long int, int> a;

    while(currentA != NULL || currentB != NULL)
    {
        if(currentA != NULL)
        {
            a[(long int) (&*currentA)]++;
            if(a[(long int) (&*currentA)] > 1)
                return currentA->data;
            currentA = currentA->next;
        }
        if(currentB != NULL)
        {
            a[(long int) (&*currentB)]++;
            if(a[(long int) (&*currentB)] > 1)
                return currentB->data;
            currentB = currentB->next;   
        }
    }
    return 0;
}
