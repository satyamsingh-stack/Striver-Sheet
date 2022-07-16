class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[res]){
                res++;
                nums[res]=nums[i];
            }
        }
        return res+1;
    }
};
