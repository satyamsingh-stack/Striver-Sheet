class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> zero_row(r,1);
        vector<int> zero_col(c,1);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    zero_row[i]=0;
                    zero_col[j]=0;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(zero_row[i]==0 || zero_col[j]==0)
                    matrix[i][j]=0;
            }
        }
    }
};
