//Time Comp: O(nlog n)
//Space Comp: O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        if(n==0)
            return "";
        sort(str.begin(),str.end());
        string a=str[0];
        string b=str[n-1];
        string ans="";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
                ans=ans+a[i];
            else
                break;
        }
        return ans;
    }
};
