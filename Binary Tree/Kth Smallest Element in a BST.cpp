class Solution {
public:
    TreeNode *inorder(TreeNode *root,int &k){
        if(root==NULL)
            return NULL;
        TreeNode *left=inorder(root->left,k);
        if(left!=NULL)
            return left;
        k--;
        if(k==0)
            return root;
        return inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode *temp=inorder(root,k);
        return temp->val;
    }
};
