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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,int>>q;
        int level = 0;
        if(root==NULL)return ans;
        q.push(make_pair(root,0));
        while(q.size()!=0){
            vector<int>tmp; 
            while(q.size()!=0 && (q.front()).second == level){
                auto node = q.front();
                q.pop();
                tmp.push_back(node.first->val);
                if(node.first->left)q.push(make_pair(node.first->left,level+1));
                if(node.first->right)q.push(make_pair(node.first->right,level+1));
            }
            ans.push_back(tmp);
            level++;
        }
        return ans;
    }
};
