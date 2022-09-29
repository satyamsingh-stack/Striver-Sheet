//Time Comp:O(N)
//Space Comp: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0,maxi=nums[0];
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>maxi)
                maxi=sum;
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};
   
