
class Solution {
public:
     int ans=1;
    bool isUnivalTree(TreeNode* root) {
       
        if (root==NULL){
            return false;
    }
        funcall(root,root->val);
        
            return ans;
            
        
    }
        int funcall(TreeNode *root ,int data ){
            if (root->left!=NULL)
            {
                funcall(root->left,data);
                }
                if (root->val!=data)
                {
                     ans=0;
                }
            if (root->right!=NULL)
            {
                funcall(root->right,data);
                }
            return ans;
            }
            
};
        

    
    