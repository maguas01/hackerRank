
"""
	You’re given the pointer to the head node of a linked list and the position of a node to delete. 
	Delete the node at the given position and return the head node. A position of 0 indicates 
	head, a position of 1 indicates one node away from the head and so on. The list may become empty 
	after you delete the node.
 
	Delete Node at a given position in a linked list
	Node is defined as
 
	class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method. 
"""

def Delete(head, position):
    if position == 0 : 
        return head.next
    head.next = Delete(head.next, position - 1)
    return head
  
  
  
  