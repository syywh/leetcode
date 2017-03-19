#ifndef SOLUTION_H
#define SOLUTION_H

#include <stddef.h>
#include <iostream>
#include <vector>

class Solution{
public:
	Solution();
	
	struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};
 
	int maxDepth(TreeNode* root);
};

#endif