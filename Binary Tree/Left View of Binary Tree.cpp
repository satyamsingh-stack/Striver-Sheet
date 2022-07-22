void recursiveLeft(Node *root,int level,vector<int> &ans){
    if(root==NULL)
        return ;
    if(ans.size()==level)
        ans.push_back(root->data);
    recursiveLeft(root->left,level+1,ans);
    recursiveLeft(root->right,level+1,ans);
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   recursiveLeft(root,0,ans);
   return ans;
}
