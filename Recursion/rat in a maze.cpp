//Time Comp: O(4^(n*n))
//Space Comp: O(n*n)

class Solution{
    public:
    bool issafe(int newx,int newy,vector<vector<bool>> &visited,
    vector<vector<int>> &m,int n){
        if((newx>=0 && newx<n) && (newy>=0 && newy<n) && visited[newx][newy]!=1 
        && m[newx][newy]==1)
            return true;
        else
            return false;
    }
    void solve(int x,int y,vector<vector<int>> &m,int n,vector<vector<bool>> &visited,
    string path,vector<string> &ans){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        //down
        visited[x][y]=1;
        if(issafe(x+1,y,visited,m,n))
            solve(x+1,y,m,n,visited,path+'D',ans);
        //UP
        if(issafe(x-1,y,visited,m,n))
            solve(x-1,y,m,n,visited,path+'U',ans);
        //left
        if(issafe(x,y-1,visited,m,n))
            solve(x,y-1,m,n,visited,path+'L',ans);
        //right
        if(issafe(x,y+1,visited,m,n))
            solve(x,y+1,m,n,visited,path+'R',ans);
        visited[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool> > visited(n,vector<bool> (n,0));
        string path="";
        if(m[0][0]==0)
            return ans;
        solve(0,0,m,n,visited,path,ans);
        return ans;
    }
};
