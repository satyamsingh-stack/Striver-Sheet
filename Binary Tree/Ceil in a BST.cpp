int ceil(Node *root,int x){
	Node *res=NULL;
	while(root!=NULL){
		if(root->key==x)
			return root->key;
		else if(root->key>x){
			res=root;
			root=root->left;
		}
		else
			root=root->right;
	}
	return res->key;
}
