//Time Comp: O(m*n)
//Space Comp: O(1)


class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length(),n=needle.length();
        for(int i=0;i<=h-n;i++){
            int j=0;
            for(j=0;j<n;j++){
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==n)
                return i;
        }
        return -1;
    }
};
