
/*
You’re given the pointer to the head node of a linked list and the position of a node to delete. 
Delete the node at the given position and return the head node. A position of 0 indicates 
head, a position of 1 indicates one node away from the head and so on. The list may become empty 
after you delete the node.

  Delete Node at a given position in a linked list 

  Node is defined as :
	struct Node{
		int data;
		struct Node *next;
  }
*/
Node* Delete(Node *head, int pos){
    Node *current = head;
    Node *prevPtr = head;
    
    if(pos == 0){
        delete current;
        return head = head->next;
    } else {
        while(pos--){
            prevPtr = current;
            current = current->next;
        }
        prevPtr->next = current->next;
        delete current;
    }
	return head;
}