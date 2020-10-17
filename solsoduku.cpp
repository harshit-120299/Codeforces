#include <bits/stdc++.h>
using namespace std;
# define n 9

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isFoundInRow(int sudoku[9][9],int r, int val){
    for (int i = 0; i < 9; ++i) {
        if(sudoku[r][i]==val)
            return true;
    }
    return false;
}

bool isFoundInCol(int sudoku[9][9],int c, int val){
    for (int i = 0; i < 9; ++i) {
        if(sudoku[i][c]==val)
            return true;
    }
    return false;
}

bool isFoundInBox(int sudoku[9][9],int r, int c, int val){

    int startRow = r - r%3 ; 
    int startCol = c - c%3 ;
    for (int i = startRow; i < startRow+3; ++i){
        for (int j = startCol; j < startCol+3; ++j){
            if(sudoku[i][j]==val) return true;
        }
    }
    return false;
}

void PrintSudokuBoard(int sodoku[9][9]) {
    for (int i = 0; i < 9; ++i) {

        for (int j = 0; j < 9; ++j) {

            cout<<setw(2)<<sodoku[i][j];
            if((j+1)%3==0) cout<<" ";

        }

        if((i+1)%3==0) cout<<"\n"; 
        cout<<endl;
    }
}

bool solveSuduku(int board[n][n]){
    int row=-1, col=-1;
    bool isEmpty=true;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++) {

            if(board[i][j]==0) {
                row=i; col=j;
                isEmpty=false;
                break;
            }
        }

        if(!isEmpty) break;
    }

    if(isEmpty) return true;

    for(int val=1; val<=n; val++) {

        if( !isFoundInRow(board,row,val) && 
            !isFoundInCol(board,col,val) && 
            !isFoundInBox(board,row,col,val)
            ) {

            board[row][col]=val;
            if ( solveSuduku(board) )
                return true;
            else
                board[row][col]=0;
        }
    }
    return false;
}


int main() {
    //IOS;
    c_p_c();    
    int val, t;
    cin>>t;
    while(t--){
        int board[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>val; //Enter 0s for empty cells
                if (val>9 || val<0){
                    cout<<"Values can't be '>0' or '<1'";
                    return 0;
                }
                board[i][j]=val;
            }
        }
        //test input
        //         1
        // 0 2 0  0 0 4  3 0 0 
        // 9 0 0  0 2 0  0 0 8 
        // 0 0 0  6 0 9  0 5 0 

        // 0 0 0  0 0 0  0 0 1 
        // 0 7 2  5 0 3  6 8 0 
        // 6 0 0  0 0 0  0 0 0 

        // 0 8 0  2 0 5  0 0 0 
        // 1 0 0  0 9 0  0 0 3 
        // 0 0 9  8 0 0  0 6 0

        // int board[9][9]={0,2,0, 0,0,4, 3,0,0,
        //               9,0,0, 0,2,0, 0,0,8,
        //               0,0,0, 6,0,9, 0,5,0,

        //               0,0,0, 0,0,0, 0,0,1,
        //               0,7,2, 5,0,3, 6,8,0,
        //               6,0,0, 0,0,0, 0,0,0,

        //               0,8,0, 2,0,5, 0,0,0,
        //               1,0,0, 0,9,0, 0,0,3,
        //               0,0,9, 8,0,0, 0,6,0};
        //PrintSudukoBoard(board);
        if(solveSuduku(board)){
            PrintSudokuBoard(board);
        }
        else cout<<"Please check if your input is solvable!";
        cout<<endl;
    }
    return 0;
}