
class Solution {
public:
    int height(TreeNode* root) {
        if (root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right)); 
    }
    bool isBalanced (TreeNode *root){
        if (root==0)
            return true;
        int l=height(root->left);
        int r=height(root->right);
        int d=abs(l-r);
        if(d>1) return false;
        else return isBalanced(root->left ) && isBalanced(root->right);
    }
};