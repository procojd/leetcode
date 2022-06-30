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
    bool ismirror(TreeNode* a,TreeNode* b)
    {
        if(a==NULL&&b==NULL)
        return true;
        if(a==NULL && b!=NULL || a!=NULL && b==NULL || a->val != b->val )
            return false;
        bool left=ismirror(a->left,b->right);
        bool right=ismirror(a->right,b->left);
        
        if(left&&right)
            return true;
        return false;  
    }
    bool isSymmetric(TreeNode* root) {
       return ismirror(root->left,root->right); 
    }
};