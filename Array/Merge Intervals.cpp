class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> dummy=intervals[0];
        for(auto x:intervals){
            if(x[0]<=dummy[1])
                dummy[1]=max(x[1],dummy[1]);
            else{
                ans.push_back(dummy);
                dummy=x;
            }
        }
        ans.push_back(dummy);
        return ans;
    }
};
