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
bool identical(Node *root1,Node *root2){
	if(root1==NULL && root2==NULL)
		return true;
	if((root1==NULL && root2!=NULL)||(root2==NULL && root1!=NULL)||(root1->key!=root2->key))
		return false;
	return identical(root1->left,root2->left)&& identical(root1->right,root2->right);
	
}
int main(){
	Node *root1=new Node(1);
	root1->left=new Node(2);
	root1->right=new Node(3);
	root1->right->left=new Node(4);
	root1->right->right=new Node(5);
	Node *root2=new Node(1);
	root2->left=new Node(2);
	root2->right=new Node(3);
	root2->right->left=new Node(4);
	int ans=identical(root1,root2);
	if(ans)
		cout<<"Two Tree are Identical";
	else
		cout<<"Two Tree are not Identical";
	return 0;
}
