//Time Comp: O(N)
//Space Comp: O(1)

class Solution {
public:
    string reverseWords(string s) {
        int i, len, start, end;
        // remove leading spaces
        for (i=0;i<s.size()&&' '==s[i];i++);
        start = i;
        // remove trailing spaces
        for (i=s.size()-1;i>= 0 &&' '==s[i];i--);
        end = i;
        // remove multiple spaces btw. words
        for (i=start,len=0;i<=end;i++) {
            if (' '==s[i]&&' '==s[i - 1])
                continue;
            s[len++]=s[i];
        }
        s.erase(s.begin() + len, s.end());
        reverse(s.begin(),s.end());
        i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};
