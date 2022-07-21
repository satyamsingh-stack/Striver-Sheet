class Solution {
public:
    int height(TreeNode *root,int &ans){
        if(root==NULL)
            return 0;        
        int ls=max(0,height(root->left,ans));
        int rs=max(0,height(root->right,ans));
        ans=max(ans,ls+rs+root->val);
        return root->val+max(ls,rs);
        
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        height(root,ans);
        return ans;
    }
};
