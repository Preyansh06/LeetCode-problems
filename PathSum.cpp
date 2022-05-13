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
private:
    unordered_set<int> st;

    void sum(TreeNode* root, int localSum, int targetSum) {
        if(root == NULL)
            return;
        
        if((root->left == NULL and root->right == NULL)) {
            st.insert(localSum + root->val);
            return;
        }
        
        localSum += root->val;
        
        sum(root->left, localSum, targetSum);
        sum(root->right, localSum, targetSum);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        
        sum(root, 0, targetSum);
        
        return st.find(targetSum) != st.end();
    }
};
