#include "solution.h"

using namespace std;
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

char Solution::findTheDifference(string s, string t)
{
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	
	for( int i = 0; i < t.size(); i++){
		if( t[i] != s[i] ) return t[i];
	}
	
	/**
	 *         char r = 0;
	 *  for(char c:s) r^=c;
	 *  for(char c:t) r^=c;
	 *   return r;
	 */

}


