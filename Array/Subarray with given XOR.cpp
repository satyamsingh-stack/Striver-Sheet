int Solution::solve(vector<int> &A, int B) {
    int cnt=0;
    int xorr=0;
    unordered_map<int,int> mp;
    for(auto x:A){
        xorr=xorr^x;
        if(xorr==B)
            cnt++;
        if(mp.find(xorr^B)!=mp.end())
            cnt+=mp[xorr^B];
        mp[xorr]+=1;
    }
    return cnt;
}
