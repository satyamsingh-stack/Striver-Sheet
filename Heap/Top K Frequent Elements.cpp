class Solution {
public:
    struct comparator{
        bool operator()(pair<int,int> &a,pair<int,int> &b){
            return a.second>b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comparator> minheap;
        for(auto pair:mp){
            minheap.push(pair);
            if(minheap.size()>k)
                minheap.pop();
        }
        vector<int> ans;
        while(minheap.empty()==false){
            ans.push_back(minheap.top().first);
            minheap.pop();
        }
        return ans;
    }
};
