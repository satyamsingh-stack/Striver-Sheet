//Time Comp: O(N)
//SpaceComp: O(N)

TreeNode* helper(vector<int> &inorder,int is,int ie,vector<int> &postorder,int ps,int pe,map<int,int> mp){
        if(is>ie || ps>pe)
            return NULL;
        TreeNode *root=new TreeNode(postorder[pe]);
        int left=mp[postorder[pe]];
        int ele=left-is;
        root->left=helper(inorder,is,left-1,postorder,ps,ps+ele-1,mp);
        root->right=helper(inorder,left+1,ie,postorder,ps+ele,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
    }
