//Time Comp: O(9^(n*n))
//Space Comp: O(1)

class Solution {
public:
    bool issafe(int row,int col,int val,vector<vector<char>> &board){
        for(int i=0;i<board.size();i++){
            //row check
            if(board[row][i]==val)
                return false;
            //col check
            if(board[i][col]==val)
                return false;
            // 3*3 mat check
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>> &board){
        int n=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    for(char val='1';val<='9';val++){
                        if(issafe(i,j,val,board)){
                            board[i][j]=val;
                            bool further=solve(board);
                            if(further)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
