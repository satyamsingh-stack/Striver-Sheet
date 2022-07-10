class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int N, vector<vector<int>> adj[])
    {
        int parent[N];
        int key[N];
        bool mst[N];
        for(int i=0;i<N;i++){
            key[i]=INT_MAX;
            mst[i]=false;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        key[0]=0;
        parent[0]=-1;
        minheap.push({0,0});
        int sum=0;
        while(minheap.empty()==false){
            int u=minheap.top().second;
            minheap.pop();
            mst[u]=true;
            for(auto x:adj[u]){
                int v=x[0];
                int wt=x[1];
                if(mst[v]==false && wt<key[v]){
                    key[v]=wt;
                    parent[v]=u;
                    minheap.push({key[v],v});
                }
            }
        }
        for(int i=0;i<N;i++)
            sum+=key[i];
        return sum;
    }
};
