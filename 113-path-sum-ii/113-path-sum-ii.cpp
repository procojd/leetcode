class Solution {
public:
    void helper(TreeNode* root,vector<int> &temp,vector<vector<int>> &ans,int targetSum){
        if(root->left == NULL && root->right == NULL)
        {
            int a = 0;
            a += root->val;
            for(auto i:temp)
                a += i;
            if(a == targetSum){
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }
            return;
        }
        if(root->left){
            temp.push_back(root->val);
            helper(root->left,temp,ans,targetSum);
            temp.pop_back();
        }
        
        if(root->right){
            temp.push_back(root->val);
            helper(root->right,temp,ans,targetSum);
            temp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(root == NULL)
            return ans;
        helper(root,temp,ans,targetSum);
        return ans;
    }
};