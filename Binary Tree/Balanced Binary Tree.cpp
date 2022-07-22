class Solution {
public:
    int ans=true;
    int height(TreeNode *root){
        if(!root)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1)    ans=false;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        height(root);
        return ans;
    }
};
