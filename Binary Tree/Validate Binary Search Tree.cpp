class Solution {
public:
    bool isvalid(TreeNode* root,long long int  l,long long int r){
        if(root==NULL)
            return true;
        if(root->val>=r && root->val<=l)
            return false;
        return isvalid(root->left,l,root->val) && isvalid(root->right,root->val,r);
    }
    bool isValidBST(TreeNode* root) {
        return isvalid(root,LONG_MIN,LONG_MAX);
    }
};
