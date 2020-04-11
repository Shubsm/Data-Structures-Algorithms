bool FindEmptyPos(vector<vector<char>> &A, int &row, int &col){
    for(row=0; row<9; row++)
        for(col=0; col<9; col++)
            if(A[row][col] == '.')
                return true;

    return false;
}

bool isValid(vector<vector<char>> &A, int row, int col, int n){
    char num = n+'0';
    for(int r=0; r<9; r++)
        if(A[r][col] == num) return false;

    for(int c=0; c<9; c++)
        if(A[row][c] == num) return false;

    int srow = row/3, scol = col/3;
    for(int r=srow*3; r<(srow+1)*3; r++)
        for(int c=scol*3; c<(scol+1)*3; c++)
            if(A[r][c] == num)
                return false;

    return true;
}

bool solver(vector<vector<char>> &A){
    int row, col;
    if(FindEmptyPos(A, row, col)==false)
        return true;

    for(int n=1; n<=9; n++){
        if(isValid(A, row, col, n)){
            A[row][col] = n+'0';
            if(solver(A)==true)
                return true;

            A[row][col] = '.';
        }
    }
    return false;
}

void Solution::solveSudoku(vector<vector<char> > &A) {
    bool ans = solver(A);
}
