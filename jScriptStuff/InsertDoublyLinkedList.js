/*Given a reference to the head of a doubly-linked list and an integer,  data, create a new Node 
object having data value data and insert it into a sorted linked list.
Complete the Node* SortedInsert(Node* head, int data) method in the editor below. It has two parameters:
head:  A reference to the head of a doubly-linked list of Node objects.
data: An integer denoting the value of the  data field for the Node you must insert into the list.

The method must insert a new Node into the sorted (in ascending order) doubly-linked list whose data 
value is  data without breaking any of the list's double links or causing it to become unsorted.
*/

/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
    Node is defined as
    var Node = function(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
*/

// This is a "method-only" submission.
// You only need to complete this method.

function sortedInsert(head, data) {
    var temp = new Node();
    temp.data = data;
    temp.next = null;
    temp.prev = null;
    var curr = head;
    
    if(head == null) { //insert into empty list
        head = temp;
        //print(head);
        return head;
    } else if (curr.data >= data) { //insert into front of the list
        temp.next = curr;
        temp.prev = curr.prev;
        curr.prev = temp;
        head = temp;
        //print(head);
        return head;
    } else {
        while(curr!= null){ // insert in the middle of the list
            if(curr.data >= data){
                temp.next = curr;
                temp.prev = curr.prev.next;
                curr.prev.next = temp;
                curr.prev = temp;
                //print(head);
                return head;
            }
            if(curr.next == null){
                break;
            }
            curr = curr.next;
        }                   // insert at the end of the list
        temp.prev = curr;
        curr.next = temp;
        //print(head);
        return head;
    }
}
