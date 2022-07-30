class Solution {
public:
    int solve(string s1,string s2,int m,int n){
        int t[m+1][n+1];
        for(int i=0;i<=m;i++)
            t[i][0]=i;
        for(int i=0;i<=n;i++)
            t[0][i]=i;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1])
                    t[i][j]=0+t[i-1][j-1];
                else
                    t[i][j]=1+min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]));
            }
        }
        return t[m][n];
    }
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        return solve(word1,word2,m,n);
    }
};
