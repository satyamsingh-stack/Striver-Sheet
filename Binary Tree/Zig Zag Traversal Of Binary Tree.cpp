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
vector<vector<int>> zigzag(Node *root){
	vector<vector<int>> result;
	if(root==NULL)
		return result;
	queue<Node*> q;
	q.push(root);
	bool lefttoright=false;
	while(q.empty()==false){
		int size=q.size();
		vector<int> level;
		for(int i=0;i<size;i++){
			Node *temp=q.front();
			q.pop();
			level.push_back(temp->key);
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		if(lefttoright){
			reverse(level.begin(),level.end());
			lefttoright=0;	
		}
		else
			lefttoright=1;
		result.push_back(level);
	}
	return result;
}
int main(){
	Node *root=new Node(3);
	root->left=new Node(9);
	root->right=new Node(20);
	root->right->left=new Node(15);
	root->right->right=new Node(7);
	vector<vector<int>> ans;
	ans=zigzag(root);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
