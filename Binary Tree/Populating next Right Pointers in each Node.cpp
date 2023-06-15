//Time Comp: O(N)
//Space Comp: O(1)
class Solution {
public:
    void traverse(Node *root1,Node *root2){
        if(root1==NULL && root2==NULL)
            return ;
        root1->next=root2;
        traverse(root1->left,root1->right);
        traverse(root1->right,root2->left);
        traverse(root2->left,root2->right);
        root2->next=NULL;
    }
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        traverse(root->left,root->right);
        return root;
    }
};
