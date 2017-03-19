#ifndef SOLUTION_H
#define SOLUTION_H

#include <stddef.h>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>  

using namespace std;
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
	char findTheDifference(string s, string t);
};

#endif