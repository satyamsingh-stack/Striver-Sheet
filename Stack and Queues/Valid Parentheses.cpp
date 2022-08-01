class Solution {
public:
    bool ismatching(char a,char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                else if(ismatching(st.top(),s[i])==false)
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};
