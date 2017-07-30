/*
   You’re given the pointer to the head node of a linked list. Change the next pointers of the nodes so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.
   */


/*
   Reverse a linked list and return pointer to the head
   The input list will have at least one element  
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
   */
Node* Reverse(Node *head)
{
    Node* curr = head, * prev = NULL, * nextN = NULL;
    while( curr != NULL ) 
    {
        nextN = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextN;
    }
    head = prev;
    return head;
}

