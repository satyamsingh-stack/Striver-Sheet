//Time Comp: O(N)
//Space Comp: O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0],ma=ans,mi=ans;
        for(int i=1;i<n;i++){
            if(nums[i]<0)
                swap(ma,mi);
            ma=max(nums[i],nums[i]*ma);
            mi=min(nums[i],nums[i]*mi);
            ans=max(ans,ma);
        }
        return ans;
    }
};
