'''
You are given a pointer to the root of a binary tree. 
You need to print the level order traversal of this tree. In level order traversal, we visit the 
nodes level by level from left to right. You only have to complete the function

 1 <= Nodes in the tree <= 500
'''

import Queue

'''
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
'''
def levelOrder(root):
    if root == None : 
        return
    q = Queue.Queue()
    q.put(root)
    while(not q.empty()) : 
        front = q.get()
        print (front.data),
        if front.left != None :
            q.put(front.left)
        if front.right != None :
            q.put(front.right)
            