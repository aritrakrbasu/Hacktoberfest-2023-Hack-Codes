class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<char,int>> rowMat;
        unordered_map<int,unordered_map<char,int>> colMat;
        unordered_map<int,unordered_map<char,int>> boxMat;
        
        for(int i = 0 ; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(rowMat[i][board[i][j]]) return false;
                    else rowMat[i][board[i][j]]++;
                    
                    if(colMat[j][board[i][j]]) return false;
                    else colMat[j][board[i][j]]++;
                    
                    if(boxMat[((i/3)*3) + j/3][board[i][j]]) return false;
                    else boxMat[((i/3)*3) + j/3][board[i][j]]++;
                }
            }
        }
        
        return true;
    }
};
