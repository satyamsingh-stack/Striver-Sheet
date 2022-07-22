class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(q.empty()==false){
            auto p=q.front();
            q.pop();
            TreeNode *temp=p.first;
            int x=p.second.first;
            int y=p.second.second;
            nodes[x][y].insert(temp->val);
            if(temp->left!=NULL)
                q.push({temp->left,{x-1,y+1}});
            if(temp->right!=NULL)
                q.push({temp->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto x:nodes){
            vector<int> col;
            for(auto y:x.second){
                col.insert(col.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
