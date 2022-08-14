//Time Comp: O(nl)
//Space Comp: O(1)



class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        else if(n==2)
            return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            int c=1;
            s=s+"$";
            string t="";
            for(int j=1;j<s.length();j++){
                if(s[j]==s[j-1])
                    c++;
                else{
                    t=t+to_string(c)+s[j-1];
                    c=1;
                }
            }
            s=t;
        }
        return s;
    }
};
