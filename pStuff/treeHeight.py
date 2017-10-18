
'''
The height of a binary tree is the number of edges between the tree's root and its furthest leaf. 
This means that a tree containing a single node has a height of  0.

Complete the getHeight function provided in your editor so that it returns the height of a binary tree. 
This function has a parameter, root , which is a pointer to the root node of a binary tree. 
Note -The Height of binary tree with single node is taken as zero.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):
    if root == None : 
        return -1
    else : 
        leftDepth = height(root.left)
        rightDepth = height(root.right)
        if leftDepth  > rightDepth : 
            return leftDepth + 1
        return rightDepth + 1
    