'''
Given a reference to the head of a doubly-linked list and an integer,  data, create a new Node 
object having data value data and insert it into a sorted linked list.
Complete the Node* SortedInsert(Node* head, int data) method in the editor below. It has two parameters:
head:  A reference to the head of a doubly-linked list of Node objects.
data: An integer denoting the value of the  data field for the Node you must insert into the list.

The method must insert a new Node into the sorted (in ascending order) doubly-linked list whose data 
value is  data without breaking any of the list's double links or causing it to become unsorted.
'''

'''
 Insert a node into a sorted doubly linked list
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None, prev_node = None):
       self.data = data
       self.next = next_node
       self.prev = prev_node

 return the head node of the updated list 
'''
'''
def prin(head) : 
    while(head != None) :
        print( "%d " % head.data),
        head = head.next
    print ' '
'''

def SortedInsert(head, data):
    temp = Node()
    temp.data = data
    temp.next = None
    temp.prev = None
    curr = head
    
    if(head == None) :  #insert if list is empty
        head = temp
        #prin(head)
        return head
    elif curr.data >= data :  # insert at the front of the list
        temp.next = curr
        temp.prev = curr.prev
        curr.prev = temp
        head = temp
        #prin(head)
        return head
    else :
        while curr!= None :
            if curr.data >= data : #insert in the middle of the list
                temp.next = curr
                temp.prev = curr.prev.next
                curr.prev.next = temp
                curr.prev = temp
                #prin(head)
                return head
            if curr.next == None :
                break
            curr = curr.next
        temp.prev = curr    #insert at the end of the list
        curr.next = temp
        #prin(head)
        return head
  