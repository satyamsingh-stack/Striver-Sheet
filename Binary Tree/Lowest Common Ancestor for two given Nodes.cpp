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
Node *LCA(Node *root,Node *p,Node *q){
	if(root==NULL)
		return 0;
	if(root->key==p->key || root->key==q->key)
		return root;
	Node *lca1=LCA(root->left,p,q);
	Node *lca2=LCA(root->right,p,q);
	if(lca1!=NULL && lca2!=NULL)
		return root;
	if(lca1==NULL)
		return lca2;
	else
		return lca1;
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right=new Node(3);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	cout<<LCA(root,root->left->left,root->left->right)->key;
	return 0;
}
