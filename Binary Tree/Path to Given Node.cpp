bool getpath(TreeNode *root,vector<int> &ans,int x){
    if(root==NULL)
        return false;
    ans.push_back(root->val);
    if(root->val==x)
        return true;
    if(getpath(root->left,ans,x)||getpath(root->right,ans,x))
        return true;
    ans.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B){
    vector<int> ans;
    if(A==NULL)
        return ans;
    getpath(A,ans,B);
    return ans;
}
