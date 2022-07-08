// Time Comp: O(N)
// Space Comp: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el=0;
        for(int i=0;i<nums.size();i++){
            if(count==0)
                el=nums[i];
            if(nums[i]==el)
                count++;
            else
                count--;
        }
        return el;
    }
};
