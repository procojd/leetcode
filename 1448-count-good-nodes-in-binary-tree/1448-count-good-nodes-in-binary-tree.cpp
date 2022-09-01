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
    void solve(TreeNode* root,int &count,int maxvalue)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val>=maxvalue)
        {
            count++;
            maxvalue=root->val;
        }
        
        solve(root->left,count,maxvalue);
        solve(root->right,count,maxvalue);
        
        
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int count=0;
        solve(root,count,root->val);
        return count;
        
    }
};