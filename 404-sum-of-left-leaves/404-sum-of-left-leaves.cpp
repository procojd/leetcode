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
    int solve(TreeNode* root ,int&ans,bool flag)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
        {
            if(flag)
                ans+=root->val;
        }
        solve(root->left,ans,true);
        solve(root->right,ans,false);
        
        return ans;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        ans=solve( root,ans,false);
        return ans;
        
    }
};