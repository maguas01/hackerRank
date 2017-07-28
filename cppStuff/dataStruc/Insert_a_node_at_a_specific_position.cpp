/*You’re given the pointer to the head node of a linked list, an integer to 
 * add to the list and the position at which the integer must be inserted. 
 * Create a new node with the given integer, insert this node at the 
 * desired position and return the head node. A position of 0 indicates head, 
 * a position of 1 indicates one node away from the head and so on. The head 
 * pointer given may be null meaning that the initial list is empty.
 */

/*
Insert Node at a given position in a linked list 
head can be NULL 
First element in the linked list is at position 0
Node is defined as 
struct Node
{
    int data;
    struct Node *next;
}
*/

Node* InsertNth(Node *head, int data, int position)
{
    if( head == NULL )
        return head;

    Node* temp = new Node, *currPtr = head, *prevPtr = NULL;
    temp->data = data;

    if( position == 0 )
    {
        temp->next = head;
        head = temp;
        return head;
    }
    else
    {
        while(position--)
        {
            prevPtr = currPtr;
            currPtr = currPtr->next;
        }
        prevPtr->next = temp;
        temp->next = currPtr;
        return head;
    }
}
