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
    int countNodes(TreeNode* root) {
       if(root==NULL)
           return 0;
        int left=0,right=0;
        TreeNode* leftnode=root;
        TreeNode* rightnode=root;
        
        while(leftnode!=NULL)  
        {
            left++;
            leftnode=leftnode->left;
        }
         while(rightnode!=NULL)  
        {
            right++;
            rightnode=rightnode->right;
        }
        if(right==left)
        {return pow(2,left)-1;}
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};