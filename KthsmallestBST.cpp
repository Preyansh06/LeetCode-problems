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
        int ans;
public:
     Solution():ans(0){}
    void inorder(TreeNode* root,int k,int &count)
    {
        if(!root)
            return;
        inorder(root->left,k,count);
        count++;
        
        
        if(count==k)
        {
            ans=root->val;
            return ;
        }
        
        inorder(root->right,k,count);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        inorder(root,k,count);
        return ans;
        
    }
};
