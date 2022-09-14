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
    
    void increasingBSTHelper(TreeNode* root, TreeNode* &head) {
        if(!root) {
            return;
        }
        
        increasingBSTHelper(root->right, head);
        
        root->right = head;
        head = root;
        
        increasingBSTHelper(root->left, head);
        root->left = NULL;
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* head = NULL;
        increasingBSTHelper(root, head);
        return head;
    }
};