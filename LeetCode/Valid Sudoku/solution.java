class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        // Row and Column checked
        for(int i=0;i<9;i++){
            HashSet<Character> rowHs = new HashSet<>();
            HashSet<Character> colHs = new HashSet<>();
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(rowHs.contains(board[i][j]))return false;
                    else rowHs.add(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(colHs.contains(board[j][i]))return false;
                    else colHs.add(board[j][i]);
                }
            }
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                HashSet<Character> boxHs = new HashSet<>();
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        char c = board[x+i*3][y+j*3];
                        if(c!='.'){
                            if(boxHs.contains(c))return false;
                            else boxHs.add(c);   
                        }
                    }
                }
            }
        }
        return true;
        
        
    }
}