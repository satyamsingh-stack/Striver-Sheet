//Time Comp: O(1)
//Space : O(H)
stack<TreeNode*> st;
    void pushall(TreeNode *node){
        for(; node!=NULL; st.push(node), node=node->left);
    }
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    
    int next() {
        TreeNode *temp=st.top();
        st.pop();
        pushall(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
