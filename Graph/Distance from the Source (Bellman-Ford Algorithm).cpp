class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        vector<int> dist(V,100000000);
        dist[S]=0;
        for(int i=1;i<=V-1;i++){
            for(auto x:adj){
                if(dist[x[0]]+x[2]<dist[x[1]]){
                    dist[x[1]]=dist[x[0]]+x[2];
                }
            }
        }
        return dist;
    }
};
