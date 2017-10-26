/*
You’re given the pointer to the head node of a doubly linked list. Reverse the order of the 
nodes in the list. The head node might be NULL to indicate that the list is empty.
*/
/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* Reverse(Node* head){
    if(head == NULL || head->next == NULL) 
        return head;
    Node* curr = head, *prevPtr = NULL, *nextPtr = NULL; 
    while(curr != NULL){
        nextPtr = curr->next;
        curr->next = prevPtr;
        curr->prev = prevPtr;
        prevPtr = curr;
        curr = nextPtr;
    }
    head = prevPtr;
    return head;
}
