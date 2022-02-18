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
int height(Node *root){
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}
int main(){
	Node *root=new Node(7);
	root->left=new Node(1);
	root->right=new Node(3);
	root->left->right=new Node(2);
	cout<<"Height is : "<<height(root);
	return 0;
}
