class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        bool visited[V+1];
        for(int i=0;i<V;i++)
            visited[i]=false;
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(q.empty()==false){
            int temp=q.front();
            ans.push_back(temp);
            q.pop();
            for(int x:adj[temp]){
                if(visited[x]==false){
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
        return ans;
    }
};
