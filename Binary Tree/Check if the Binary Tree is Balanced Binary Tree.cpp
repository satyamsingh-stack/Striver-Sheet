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
bool ans=true;
int height(Node *root){
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	if(abs(lh-rh)>1)	 ans=false;
	return max(lh,rh)+1;
}
bool balanced(Node *root){
	if(root==NULL)
		return false;
	height(root);
	return ans;
}
int main(){
	Node *root=new Node(4);
	root->left=new Node(7);
	root->right=new Node(8);
	root->right->left=new Node(1);
	root->right->right=new Node(0);
	root->right->left->left=new Node(3);
	root->right->left->right=new Node(5);
	int ans=balanced(root);
	if(ans)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
