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
    
    void deep(TreeNode * root,int &sum,int &maxlevel,int level)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            if(maxlevel<level)
            {
                sum=root->val;
                maxlevel=level;
            }
            else if(maxlevel==level)
            {
                sum+=root->val;
            }
        }
        deep(root->left,sum,maxlevel,level+1);
        deep(root->right,sum,maxlevel,level+1);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        int maxlevel=0;
        deep(root, sum ,maxlevel,0);
        return sum;
        
    }
};