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
    
int idx; 

int search(vector<int> &inorder, int curr, int start, int end)
{
while(start <= end)
{
if(inorder[start] == curr)
return start;

     start++;
 }
 return -1;
}

TreeNode* constructTree(vector<int> &postorder, vector<int> &inorder, int start, int end)
{ 
if(start > end)
return NULL;

 int curr = postorder[idx--];
 TreeNode *node = new TreeNode(curr);
 
 int pos = search(inorder, curr, start, end);
    
 node->right = constructTree(postorder, inorder, pos+1, end);
 
 node->left = constructTree(postorder, inorder, start, pos-1);
 
 return node;
}
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder){ 
        idx=inorder.size()-1;
         TreeNode *node = constructTree(postorder, inorder, 0, inorder.size()-1);
 
 return node;
        
    }
};



