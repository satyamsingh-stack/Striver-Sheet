class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> ans;
        int coins[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        for(int i=9;i>=0;i--){
            while(coins[i]<=N){
                N=N-coins[i];
                ans.push_back(coins[i]);
            }
        }
        return ans;
    }
};
