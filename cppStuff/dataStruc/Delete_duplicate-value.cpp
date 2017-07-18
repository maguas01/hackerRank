/*
 *  You're given the pointer to the head node of a sorted linked list, where the data in 
 *  the nodes is in ascending order. Delete as few nodes as possible so that the list does 
 *  not contain any value more than once. The given head pointer may be null indicating that 
 *  the list is empty.

 *  For now do not be concerned with the memory deallocation. In common abstract data 
 *  structure scenarios, deleting an element might also require deallocating the memory 
 *  occupied by it. For an initial intro to the topic of dynamic memory please 
 *  consult: 
 *  http://www.cplusplus.com/doc/tutorial/dynamic/
 */

/*
   Remove all duplicate elements from a sorted linked list
   Node is defined as 
    struct Node
    {
        int data;
        struct Node *next;
     }
   */
Node* RemoveDuplicates(Node *head)
{
    if(head == NULL)
        return head;
    else
    {
        Node* currPtr = head->next, *prevPtr = head;
        while(currPtr != NULL)
        {
            if(currPtr->data == prevPtr->data)
            {
                prevPtr->next = currPtr->next;
                delete currPtr;
                currPtr = prevPtr->next;
            }
            else
            {
                prevPtr = currPtr;
                currPtr = currPtr->next;
            }
        }
        return head;
    }
}
