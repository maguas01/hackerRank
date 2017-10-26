/*
You’re given the pointer to the head node of a doubly linked list. Reverse the order of the 
nodes in the list. The head node might be NULL to indicate that the list is empty.
*/
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
     Node prev;
  }
*/

Node Reverse(Node head){
     if(head == null || head.next == null) 
        return head;
    Node curr = head, prevPtr = null, nextPtr = null; 
    while(curr != null){
        nextPtr = curr.next;
        curr.next = prevPtr;
        curr.prev = prevPtr;
        prevPtr = curr;
        curr = nextPtr;
    }
    head = prevPtr;
    return head;
}
