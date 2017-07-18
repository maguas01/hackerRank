/*
   You're given the pointer to the head node of a sorted linked list, where the data in the 
   nodes is in ascending order. Delete as few nodes as possible so that the list does not 
   contain any value more than once. The given head pointer may be null indicating that the 
   list is empty.

   For now do not be concerned with the memory deallocation. In common abstract data 
   structure scenarios, deleting an element might also require deallocating the memory 
   occupied by it. For an initial intro to the topic of dynamic memory please consult: 
http://www.cplusplus.com/doc/tutorial/dynamic/
*/


/*
 * Node is defined as 
 class Node {
     int data;
    Node next;
 }
 */

Node RemoveDuplicates(Node head) 
{
    Node temp = head;
    if(temp.next == null)
        return head; 
    if(temp.data == temp.next.data) 
    { 
        temp.next = temp.next.next; 
        RemoveDuplicates(temp);
    } 
    else 
    {  
        temp = temp.next; 
        RemoveDuplicates(temp);
    }
    return head;

