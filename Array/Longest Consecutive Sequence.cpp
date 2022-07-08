class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashset;
        for(int x:nums)
            hashset.insert(x);
        int longeststreak=0;
        for(int num:nums){
            if(!hashset.count(num-1)){
                int currentnum=num;
                int currentstreak=1;
                while(hashset.count(currentnum+1)){
                    currentnum++;
                    currentstreak++;
                }
                longeststreak=max(longeststreak,currentstreak);
            }
        }
        return longeststreak;
    }
};
