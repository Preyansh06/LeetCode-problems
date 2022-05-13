class Solution {
public:
    bool f(TreeNode *root1, TreeNode* root2) {
        if(!root1) return !root2;
        if(!root2) return !root1;
        return (root1->val == root2->val) && f(root1->left, root2->right) && f(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return f(root->left, root->right);
    }
};

easy slotuion----
    class Solution{
    private:
    bool isSymmetricfast(TreeNode* rootleft,TreeNode* rootright){
        if(rootleft==NULL && rootright==NULL){
            return true;
        }
         if(rootleft!=NULL && rootright==NULL){
            return false;
        }
         if(rootleft==NULL && rootright!=NULL){
            return false;
        }
        
        if(rootleft->val!=rootright->val){
            return false;
        }
       
       bool cnd1 = isSymmetricfast(rootleft->left,rootright->right);
       bool cnd2 = isSymmetricfast(rootleft->right,rootright->left);
       
       if(cnd1==true && cnd2==true){
           return true;
       }
       else{
           return false;
       }
    }
    
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(TreeNode* root)
    {
	    if(root==NULL){
	        return true;
	    }
	    return isSymmetricfast(root->left,root->right);
    }
};
