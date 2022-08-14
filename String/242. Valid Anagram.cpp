//Time Comp: O(n)
//Space Comp: O(256)



class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[256]={0};
        int hash2[256]={0};
        for(int i=0;i<s.length();i++)
            hash1[s[i]]++;
        for(int i=0;i<t.length();i++)
            hash2[t[i]]++;
        for(int i=0;i<256;i++){
            if(hash1[i]-hash2[i]!=0)
                return false;
        }
        return true;
    }
};
