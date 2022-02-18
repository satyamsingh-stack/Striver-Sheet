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
int dia=0;
int height(Node *root){
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	dia=max(dia,lh+rh);
	return max(lh,rh)+1;
}
int main(){
	Node *root=new Node(4);
	root->left=new Node(7);
	root->right=new Node(8);
	root->right->left=new Node(1);
	root->right->left->left=new Node(3);
	root->right->right=new Node(0);
	height(root);
	cout<<"Diameter of the Tree is : "<<dia;
	return 0;
}
