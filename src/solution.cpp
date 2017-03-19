#include "solution.h"

int Solution::maxDepth(Solution::TreeNode* root)
{
    	std::vector<TreeNode*> curTrees;
    	std::vector<TreeNode*> nextTrees;
    	
    	
    	nextTrees.push_back( root);
    	int depth = -1;
    	
    	while( nextTrees.size() != 0){
    		depth++;
    		curTrees.clear();
    		curTrees.swap(nextTrees);
    		nextTrees.clear();
    		for( int i = 0; i < curTrees.size(); i++ ){
    		    if( curTrees[i] ){
        			nextTrees.push_back( curTrees[i]->left );
        			nextTrees.push_back( curTrees[i]->right );
    		    }
    		}
    	}
    	return depth;

}

