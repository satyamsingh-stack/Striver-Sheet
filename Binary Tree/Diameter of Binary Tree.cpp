class Solution {
public:
    int ans=0;
    int height(TreeNode *root){
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        ans=max(ans,lh+rh+1);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root){
        if(root==NULL)
            return 0;
        height(root);
        return ans-1;
    }
};
