// Time Comp: O(n)
// Space Comp: O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int nums1=-1;
        int nums2=-1;
        int c1=0;
        int c2=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums1)  c1++;
            else if(nums[i]==nums2) c2++;
            else if(c1==0){
                nums1=nums[i];
                c1=1;
            }
            else if(c2==0){
                nums2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums1)
                count1++;
            else if(nums[i]==nums2)
                count2++;
        }
        if(count1>nums.size()/3)
            ans.push_back(nums1);
        if(count2>nums.size()/3)
            ans.push_back(nums2);
        return ans;
    }
};
