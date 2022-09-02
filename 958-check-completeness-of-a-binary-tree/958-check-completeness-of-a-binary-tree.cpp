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
    
    int count(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+count(root->left)+count(root->right);
        
    }
    bool iscbt(TreeNode* root,int index,int count)
    {
        if(root==NULL)
            return true;
        if(index>=count)
            return false;
        else{
            bool left=iscbt(root->left,index*2+1,count);
            bool right=iscbt(root->right,index*2+2,count);
            return (left&&right);
        }
    }
    bool isCompleteTree(TreeNode* root) {
        int counti=count(root);
        return iscbt(root,0,counti);
        
        
        
    }
};