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
    vector<int>v;
    TreeNode* push(TreeNode*root)
    {
        if(root==NULL)
            return NULL;
        v.push_back(root->val);
        push(root->left);
        push(root->right);
        return root;
    }
    int kthSmallest(TreeNode* root, int k) {
       push(root);
        sort(v.begin(),v.end());
        return v[k-1];
    }
    
};