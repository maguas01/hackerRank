'''
You’re given the pointer to the head node of a doubly linked list. Reverse the order of the 
nodes in the list. The head node might be NULL to indicate that the list is empty.
'''

'''
 Reverse a doubly linked list
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None, prev_node = None):
       self.data = data
       self.next = next_node
       self.prev = prev_node

 return the head node of the updated list 
'''
def Reverse(head):
    if head == None or head.next == None :  
        return head
    curr = head
    prevPtr = None
    nextPtr = None
    while curr != None :
        nextPtr = curr.next
        curr.next = prevPtr
        curr.prev = prevPtr
        prevPtr = curr
        curr = nextPtr
    head = prevPtr
    return head
  
  