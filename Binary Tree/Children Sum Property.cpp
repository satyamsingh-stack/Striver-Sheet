//Time: O(N)
//Space: O(N)

void reorder(BinaryTreeNode < int > * root){
    int child=0;
    if(root==NULL)
        return ;
    if(root->left!=NULL)
        child+=root->left->data;
    if(root->right!=NULL)
        child+=root->right->data;
    if(child>=root->data)
        root->data=child;
    else{
        if(root->left!=NULL)
            root->left->data=root->data;
        else if(root->right!=NULL)
            root->right->data=root->data;
    }
    reorder(root->left);
    reorder(root->right);
    int total=0;
    if(root->left!=NULL)
        total+=root->left->data;
    if(root->right!=NULL)
        total+=root->right->data;
    if(root->left!=NULL || root->right!=NULL)
        root->data=total;
}
void changeTree(BinaryTreeNode < int > * root) {
    reorder(root);
}
