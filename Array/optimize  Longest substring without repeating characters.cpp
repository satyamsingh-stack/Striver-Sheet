//Time comp O(n)
//Space comp : O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,len=0;
        vector<int> ans(256,-1);
        while(right<s.size()){
            if(ans[s[right]]!=-1)
                left=max(ans[s[right]]+1,left);
            ans[s[right]]=right;
            len=max(right-left+1,len);
            right++;
        }
        return len;
    }
};
