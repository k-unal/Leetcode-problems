class Solution {
public:
    vector <string>answer;
    void treePath (TreeNode* root,string s){
if (root->left==NULL && root->right==NULL){
    s=s+to_string(root->val);
        answer.push_back(s);
        
    }
    else {
        s=s+to_string (root->val)+"->";
        if (root->left){treePath(root->left,s);}
          if (root->right){treePath(root->right,s);}
    }
}
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        treePath(root,s);
        return answer;
        
        
        
        
    }
};