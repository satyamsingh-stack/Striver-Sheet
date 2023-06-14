//Time Comp: O(N)
//Space Comp: O(N)

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> mp;
        while(q.empty()==false){
            auto it=q.front();
            q.pop();
            Node *temp=it.first;
            int line=it.second;
            if(mp.find(line)==mp.end())
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
