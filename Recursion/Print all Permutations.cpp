// Time Complexity: O(N! X N)

// Space Complexity: O(1)

class Solution {
public:
    void rec(int index,vector<int> &nums,vector<vector<int>> &ans){
        if(nums.size()==index){
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            rec(index+1,nums,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        rec(0,nums,ans);
        return ans;
    }
};
