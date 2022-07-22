class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        if(root->val==p->val || root->val==q->val)
            return root;
        TreeNode *lh=lowestCommonAncestor(root->left,p,q);
        TreeNode *rh=lowestCommonAncestor(root->right,p,q);
        if(lh!=NULL && rh!=NULL)
            return root;
        if(lh==NULL)
            return rh;
        else
            return lh;
    }
};
