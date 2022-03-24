
class Solution {
public:
    bool ValidBST(TreeNode* root,long min,long max) {
        if (root==NULL)
            return true;
        
              if(root->val>=max || root->val<=min)
            return false;
        return ValidBST(root->left,min,root->val)&& ValidBST(root->right,root->val,max);
        
    }
    bool isValidBST(TreeNode* root){
   bool a=ValidBST(root,LONG_MIN,LONG_MAX);
    return a;
}
};