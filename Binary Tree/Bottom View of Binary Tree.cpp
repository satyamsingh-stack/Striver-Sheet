class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        queue<pair<Node*,int>> q;
        map<int,int> mp;
        q.push({root,0});
        while(q.empty()==false){
            auto it=q.front();
            q.pop();
            Node *temp=it.first;
            int line=it.second;
            mp[line]=temp->data;
            if(temp->left!=NULL)
                q.push({temp->left,line-1});
            if(temp->right!=NULL)
                q.push({temp->right,line+1});
        }
        for(auto x:mp)
            ans.push_back(x.second);
        return ans;
    }
};
