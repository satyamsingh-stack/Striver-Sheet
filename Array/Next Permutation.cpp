class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),ind1,ind2;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        if(ind1<0)
            reverse(nums.begin(),nums.end());
        else{
            for(int j=n-1;j>ind1;j--){
                if(nums[ind1]<nums[j]){
                    ind2=j;
                    break;
                }
            }
            swap(nums[ind1],nums[ind2]);
            reverse(nums.begin()+ind1+1,nums.end());
        }
    }
};
