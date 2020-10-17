#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#include <unordered_map>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define INF 0x7f7f7f7f7f7f7f7f
#define MOD 1000000007
const long double pi=3.1415926535897932384626433832; 
#include <iomanip>
using namespace std;
const int n = 8;
const int rowMove[] = {+2, +1, -1, -2, -2, -1, +1, +2};
const int colMove[] = {+1, +2, +2, +1, -1, -2, -2, -1};

bool canReplace(int board[n][n], int r, int c){
    return 
        r >= 0 && r < n &&
        c >= 0 && c < n &&
        board[r][c] == 0;
}

bool solveKnight(int board[n][n], int p, int row, int col){
    if (p >=64){
        return true;
    }

    for(int i = 0; i < 8; ++i){
        int newRow = row + rowMove[i];
        int newCol = col + colMove[i];
        if (canReplace(board,  newRow, newCol) == true){
            board[newRow][newCol] = p + 1; 
            bool isSuccessful = solveKnight(board, p + 1, newRow, newCol);
            if (isSuccessful == true) return true;
            board[newRow][newCol] = 0; 
        }
    }
    return false;
}

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    IOS;
    c_p_c();
    int board[n][n] = {0};
    board[0][0] = 1;
    solveKnight(board, 1, 0, 0);
    // if (ans == true){
    //     // my function was able to solve it
    //     printBoard(board, 8);
    // }
    // else {
    //     cout << "Sorry Man! Can't visit your board";
    // }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << setw(3) << board[i][j] << " ";
        }
        cout << endl;
    }
    
}