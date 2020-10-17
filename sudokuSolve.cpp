//https://practice.geeksforgeeks.org/problems/solve-the-sudoku/0
//backtracking
#include<bits/stdc++.h>
using namespace std;
#define n 9
void printSudokuBoard(int sodoku[9][9]) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) cout<<sodoku[i][j]<<" ";
    }
}

bool isFoundInRow(int sudoku[9][9],int r, int val){
    for (int i = 0; i < 9; ++i) {
        if(sudoku[r][i]==val) return true;
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

bool sudokusolver(int sudokuBoard[9][9],int i,int j){
    if(i==n) return true;
    if(j==n) return sudokusolver(sudokuBoard,i+1,0);
    if(sudokuBoard[i][j]!=0) return sudokusolver(sudokuBoard,i,j+1);
    for(int val=0;val<=n;val++) {
        if( !isFoundInBox(sudokuBoard,i,j,val)
        && !isFoundInRow(sudokuBoard,i,val)
        && !isFoundInCol(sudokuBoard,j,val) ) {
            sudokuBoard[i][j]=val;
            if(sudokusolver(sudokuBoard,i,j+1)) return true;
        }
    }
    sudokuBoard[i][j]=0;
    return false;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int sudokuBoard[n][n];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>sudokuBoard[i][j];
            }
        }
        sudokusolver(sudokuBoard,0,0);
        printSudokuBoard(sudokuBoard);
        cout<<endl;
    }
    
    return 0;
}