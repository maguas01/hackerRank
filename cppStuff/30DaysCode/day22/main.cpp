#include "node.h"

int main()
{
		Node* root = NULL;
		int i = 10;
		while(i-->0)
		{
				root = root->insert(root, i);
		}
		root->levelOrder(root);
		return 0;
}
