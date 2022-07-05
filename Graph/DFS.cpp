class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfsOfGraphRec(vector<int> adj[],int s,int V,bool *visited,vector<int> &ans){
        visited[s]=true;
        ans.push_back(s);
        for(int x:adj[s]){
            if(visited[x]==false)
                dfsOfGraphRec(adj,x,V,visited,ans);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
        vector<int> ans;
        for(int i=0;i<V;i++)
            visited[i]=false;
        for(int i=0;i<V;i++){
            if(visited[i]==false){
                dfsOfGraphRec(adj,i,V,visited,ans);
            }
        }
        return ans;
    }
};
