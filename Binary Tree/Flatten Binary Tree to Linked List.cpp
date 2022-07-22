class Solution {
public:
    TreeNode *prevv=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL)
            return ;
        flatten(root->right);
        flatten(root->left);
        root->right=prevv;
        root->left=NULL;
        prevv=root;
    }
};
