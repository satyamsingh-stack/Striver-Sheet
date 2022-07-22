int floor(Node *root,int x){
	Node *res=NULL;
	while(root!=NULL){
		if(root->key==x)
			return root->key;
		else if(root->key>x)
			root=root->left;
		else{
			res=root;
			root=root->right;
		}
	}
	return res->key;
}
