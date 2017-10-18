/*
The height of a binary tree is the number of edges between the tree's root and its furthest leaf. 
This means that a tree containing a single node has a height of  0.

Complete the getHeight function provided in your editor so that it returns the height of a binary tree. 
This function has a parameter, root , which is a pointer to the root node of a binary tree. 
Note -The Height of binary tree with single node is taken as zero.
*/

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if (root == NULL) { 
            return -1;
        } else { 
            int leftDepth = height(root->left);
            int rightDepth = height(root->right);
            return 1 + (leftDepth > rightDepth ? leftDepth : rightDepth); 
        }   
    }