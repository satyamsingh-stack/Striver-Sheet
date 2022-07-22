class Solution {
public:
    bool ismatch(TreeNode *root1,TreeNode *root2){
        if(root1==NULL ||root2==NULL)
            return root1==root2;
        return root1->val==root2->val && (ismatch(root1->left,root2->right)) && ismatch(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return ismatch(root->left,root->right);
    }
};
