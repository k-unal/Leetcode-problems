class Solution {
public:
    int successor(TreeNode* root) {
    root = root->right;
    while (root->left != NULL) root = root->left;
    return root->val;
  }
    int predecessor(TreeNode* root){
        root=root->left;
        while(root->right!=NULL)root=root->right;
        return root->val;
        
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL)
            return NULL;
        //delete from the left subtree
         if (key<root->val)
            root->left=deleteNode(root->left,key);
          // delete from the right subtree
        else if (key>root->val)
            root->right=deleteNode(root->right,key);     
        //del curr
        else{
            //if  node is leaf
            if(root->left==NULL && root->right==NULL)
                root=NULL;
            // the node is not a leaf and has a right child
            else if (root->right!=NULL){
               root->val=successor(root) ;
            root->right=deleteNode(root->right,root->val);
            }
                // the node is not a leaf and has a left child
            else {
                root->val= predecessor(root);
            root->left=deleteNode(root->left,root->val);
            }        
        }
        
        return root;
    }
};