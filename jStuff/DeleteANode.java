
/*
	You’re given the pointer to the head node of a linked list and the position of a node to delete. 
	Delete the node at the given position and return the head node. A position of 0 indicates 
	head, a position of 1 indicates one node away from the head and so on. The list may become empty 
	after you delete the node.

	Delete Node at a given position in a linked list 
	head pointer input could be NULL as well for empty list
  
	Node is defined as :
	class Node {
		int data;
		Node next;
	}
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

Node Delete(Node head, int position) {
    if( position == 0 )
        return head.next;
    head.next = Delete(head.next, position - 1);
    return head;
}

