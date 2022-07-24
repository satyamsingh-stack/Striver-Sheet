class Solution
{
    public:
    Node *inorder(Node *root,int &k){
        if(root==NULL)
            return NULL;
        Node *right=inorder(root->right,k);
        if(right!=NULL)
            return right;
        k--;
        if(k==0)
            return root;
        return inorder(root->left,k);
    }
    int kthLargest(Node *root, int K)
    {
        Node *temp=inorder(root,K);
        return temp->data;
    }
};
