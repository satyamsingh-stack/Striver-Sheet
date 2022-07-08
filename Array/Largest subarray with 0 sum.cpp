class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;
        int sum=0;
        int res=0;
        for(int i=0;i<A.size();i++){
            sum=sum+A[i];
            if(sum==0)
                res=i+1;
            else{
                if(mp.find(sum)!=mp.end())
                    res=max(res,i-mp[sum]);
                else
                    mp[sum]=i;
            }
        }
        return res;
    }
};
