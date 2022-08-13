//Time Comp: O(N)
//Space Comp: O(1)

class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        for(i=0;i<s.size() && ' '==s[i];i++);
        s=s.substr(i);
        int sign=+1;
        long ans=0;
        i=(s[0]=='+' || s[0]=='-')? 1:0;
        if(s[0]=='-')
            sign=-1;
        int min=INT_MIN,mx=INT_MAX;
        while(i<s.length()){
            if(s[0]==' ' || !isdigit(s[i]))
                break;
            ans=ans*10+s[i]-'0';
            if(sign==-1 && sign*ans<min)
                return min;
            if(sign==+1 && sign*ans>mx)
                return mx;
            i++;
        }
        return int(ans*sign);
    }
};
