#include <iostream>
#include <queue>
#include "node.h"

Node::Node(int d)
{
		data = d;
		left = NULL;
		right = NULL;
}

Node* Node::insert(Node* root, int d)
{
		if(root == NULL)
				return new Node(d);
		else
		{
				Node* curr;
				if (d <= root->data)
				{
						curr=insert(root->left,d);
						root->left = curr;
				}
				else
				{
						curr=insert(root->right,d);
						root->right = curr;
				}
		}
		return root;

}

void Node::levelOrder(Node* root)
{
		std::queue<Node*> q;
		if(root != NULL)
		{
				q.push(root);
				while(!q.empty() )
				{
						Node* temp = q.front();
						std::cout << temp->data << " ";
						q.pop();

						if(temp->left != NULL)
								q.push(temp->left);
						if(temp->right != NULL)
								q.push(temp->right);
				}
		}
}
