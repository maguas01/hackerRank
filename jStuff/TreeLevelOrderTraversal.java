/*
You are given a pointer to the root of a binary tree. 
You need to print the level order traversal of this tree. In level order traversal, we visit the 
nodes level by level from left to right. You only have to complete the function

 1 <= Nodes in the tree <= 500
*/

   /* 
    
    class Node 
       int data;
       Node left;
       Node right;
   */
    void levelOrder(Node root) {
        if( root == null )
            return;
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        
        while(q.size() > 0){
            Node node = q.poll();
            System.out.printf("%d ", node.data);
            if(node.left != null)
                q.add(node.left);
            if(node.right != null)
                q.add(node.right);
        }
    }