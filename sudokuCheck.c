bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    for(int i = 0; i < *boardColSize;i++){
        for(int d = 0; d < boardSize;d++){
            if(board[i][d] != '.')
                
                for(int z = 0; z < *boardColSize; z++){
                    if(board[i][d] == board[z][d] &&  i != z || board[i][d] == board[i][z] && d != z )
                        return false;
                }
        
            if(i % 3 == 0 && d % 3 == 0)
               
                for(int y = i ; y < i + 3; y++){
                    for(int x = d; x < d + 3;x++){
                        if(board[y][x] != '.'){
                                
                            for(int p = i; p < i + 3;p++){
                                for(int o = d; o < d + 3;o++){
                                    if(board[y][x] == board[p][o] && p != y && x != o)
                                        return false;
        
                            }
                        } 
                    }
                }
            }  
        }
    }
    return true;
}
