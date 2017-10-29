/*
You are given a pointer to the root of a binary tree. 
You need to print the level order traversal of this tree. In level order traversal, we visit the 
nodes level by level from left to right. You only have to complete the function

 1 <= Nodes in the tree <= 500
*/

/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node* root) {
    if(root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()) { 
        node* front = q.front();
        cout << front->data << ' ';
        q.pop();
        if(front->left != NULL)
            q.push(front->left);
        if(front->right != NULL)
            q.push(front->right);
    }
}