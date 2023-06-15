//Time Comp: O(N)
//Space Comp: O(1)
    bool solve(TreeNode*root,long long int lb,long long int ub)
    {
        if(root==nullptr)return true;
        if((root->val<ub&&root->val>lb)&&(solve(root->left,lb,root->val))&&(solve(root->right,root->val,ub))) return true;
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        long long int lb=-2147483649;
        long long int ub=2147483648;
        bool ans =solve(root,lb,ub);
        return ans;
    }
