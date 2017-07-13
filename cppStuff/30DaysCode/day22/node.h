#include <iostream>
#include <queue>

class Node 
{
		private:
				Node* left, *right;
				int data;
		public:
						Node(int d);
						Node* insert(Node* root, int d);
						void levelOrder(Node* root);
};
