//TIME : O(N)
//Space : O(N)
TreeNode *helper(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder,int inStart, int inEnd, map<int,int> &mp){
        if(preStart>preEnd || inStart>inEnd)
            return NULL;
        TreeNode *root= new TreeNode(preorder[preStart]);
        int leftTree=mp[root->val];
        int ele=leftTree-inStart;
        root->left=helper(preorder,preStart+1,preEnd+ele,inorder,inStart,leftTree-1,mp);
        root->right=helper(preorder,preStart+ele+1,preEnd,inorder,leftTree+1,inEnd,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
