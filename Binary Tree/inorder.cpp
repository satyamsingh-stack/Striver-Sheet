#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *left,*right;
	Node(int k){
		key=k;
		left=right=NULL;
	}
};
int Inorder(Node *root){
	if(root!=NULL){
		Inorder(root->left);
		cout<<root->key<<" ";
		Inorder(root->right);
	}
}
int main(){
	Node *root=new Node(1);
	root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> left -> right -> left = new Node(8);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    root -> right -> right -> left = new Node(9);
    root -> right -> right -> right = new Node(10);
    Inorder(root);
	return 0;
}
