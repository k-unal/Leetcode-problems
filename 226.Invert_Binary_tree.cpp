
class Solution {
    void fun(TreeNode *curr   )
    {
        if (!curr)
return ;

        fun(curr->left);
        fun(curr->right);
    TreeNode *temp;
    temp=curr->left;
    curr->left=curr->right;
    curr->right=temp;
    }
    
public:
    TreeNode* invertTree(TreeNode* root) {
        fun(root);
        return root;
    }
};