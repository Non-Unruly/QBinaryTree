#ifndef _Q_BINARY_TREE_DEFINE_H_
#define _Q_BINARY_TREE_DEFINE_H_

#include <iostream>

typedef struct _BinaryTreeNode_
{
	union Data
	{
		int n;
		char ch;
	};
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
}BinaryTreeNode;

#endif
