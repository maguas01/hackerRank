'''
You’re given the pointer to the head node of a linked list. Change 
the next pointers of the nodes so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.
'''


"""
 Reverse a linked list
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def Reverse(head) :
    curr = head
    nextNode = None
    prev = None
    
    while( curr != None ) : 
        nextNode = curr.next
        curr.next = prev
        prev = curr
        curr = nextNode
        
    head = prev
    return head
