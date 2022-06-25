/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root)
        {
           	
    
         int left = minDepth(root->left);
         int right = minDepth(root->right);
        
        if(left==0)
            return right+1;
        if(right==0)
            return left+1;
        
        int minim= min(left,right)+1;
            return minim;
        }
        return 0;
        
    }
};