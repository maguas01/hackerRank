/*
You’re given the pointer to the head node of a doubly linked list. Reverse the order of the 
nodes in the list. The head node might be NULL to indicate that the list is empty.
*/

/*
    Reverse a doubly linked list, input list may also be empty
    Node is defined as
    var Node = function(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
*/

// This is a "method-only" submission.
// You only need to complete this method.

function reverse(head) {
    if(head == null || head.next == null) 
        return head;
    var curr = head, prevPtr = null, nextPtr = null; 
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
