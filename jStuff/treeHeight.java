
/*
The height of a binary tree is the number of edges between the tree's root and its furthest leaf. 
This means that a tree containing a single node has a height of  0.

Complete the getHeight function provided in your editor so that it returns the height of a binary tree. 
This function has a parameter, root , which is a pointer to the root node of a binary tree. 
Note -The Height of binary tree with single node is taken as zero.
*/

	/*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	static int height(Node root) {
        if( root == null){
            return -1;
        } else { 
            int leftDepth = height(root.left);
            int rightDepth = height(root.right);
           if(leftDepth > rightDepth)
               return leftDepth + 1;
            return rightDepth + 1;
        }
    }
