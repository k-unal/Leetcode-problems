class Solution {
public:
    vector <int > v;
    
    void solve(TreeNode* root) {
        if(root == NULL) return;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
    
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        if (root==NULL)
            return {};
        solve (root);
        return v;
        
        
    }
};