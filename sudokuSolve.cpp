#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isFoundInBox(int sudoku[9][9],int r, int c, int val){
	int startRow = r - r%3 ; 
    int startCol = c - c%3 ;
    for (int i = startRow; i < startRow+3; ++i){
        for (int j = startCol; j < startCol+3; ++j){
            if(sudoku[i][j]==val)
                return true;
        }
    }
    return false;
}

bool isFoundInRow(int sudoku[9][9],int r, int val){
	for (int i = 0; i < 9; ++i)	{
		if(sudoku[r][i]==val)
			return true;
	}
	return false;
}

bool isFoundInCol(int sudoku[9][9],int c, int val){
	for (int i = 0; i < 9; ++i)	{
		if(sudoku[i][c]==val)
			return true;
	}
	return false;
}

void printSudoku(int sodoku[9][9]) {
	for (int i = 0; i < 9; ++i) {

		for (int j = 0; j < 9; ++j) {
			cout<<setw(2)<<sodoku[i][j];

			if((j+1)%3==0) 
				cout<<" ";
		}
		if((i+1)%3==0) cout<<"\n"; 

	    cout<<endl;
	}
}

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


bool solveSudoku( int sudoku[9][9], int r, int c ) {
	if(r>8) return true;

	if(sudoku[r][c]==0) {
		for ( int val = 1; val <= 9; ++val ) {
			if (!isFoundInRow(sudoku,r,val) && 
				!isFoundInCol(sudoku,c,val) && 
				!isFoundInBox(sudoku,r,c,val) 
				) {
					sudoku[r][c]=val;
					if (c<8) {
						if (solveSudoku(sudoku,r,c+1)) return true;
						sudoku[r][c]=0;
					}
					else {
						c=0;
						if (solveSudoku(sudoku,r+1,c)) return true;
						sudoku[r][c]=0;
					}
			}
		}
		return false;
	}
	else  {
		if (c<8) {
			if (solveSudoku(sudoku,r,c+1)) return true;
			sudoku[r][c]=0;
		}
		else {
			c=0;
			if (solveSudoku(sudoku,r+1,c))  return true;
			sudoku[r][c]=0;
		}
		return false;
		
	}
	return false;
}


int main() {
    IOS; c_p_c();

	int sudoku[9][9]={0,2,0, 0,0,4, 3,0,0,
					  9,0,0, 0,2,0, 0,0,8,
					  0,0,0, 6,0,9, 0,5,0,

					  0,0,0, 0,0,0, 0,0,1,
					  0,7,2, 5,0,3, 6,8,0,
					  6,0,0, 0,0,0, 0,0,0,

					  0,8,0, 2,0,5, 0,0,0,
					  1,0,0, 0,9,0, 0,0,3,
					  0,0,9, 8,0,0, 0,6,0};

    solveSudoku(sudoku,0,0);
	printSudoku(sudoku);
	return 0;
}