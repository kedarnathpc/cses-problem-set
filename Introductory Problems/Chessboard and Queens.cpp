#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

bool isSafe (int row, int col, vector<vector<char>> &board) {
    int i = row, j = col;
    
    while (row >= 0 && col >= 0) {
        if (board[row][col] == '$')
            return false;
        row--, col--;
    }

    row = i, col = j;
    while (col >= 0) {
        if (board[row][col] == '$')
            return false;
        col--;
    }

    row = i, col = j;
    while (row < 8 && col >= 0) {
        if (board[row][col] == '$')
            return false;
        row++, col--;
    }

    return true;
}

void solve (int col, vector<vector<char>> &board, int &cnt) {
    if (col == 8) {
        cnt++;
        return;
    }

    for (int row = 0; row < 8; ++row) {
        if (isSafe(row, col, board) && board[row][col] != '*') {
            board[row][col] = '$';
            solve(col + 1, board, cnt);
            board[row][col] = '.';
        }
    }
}

void runCases() {
    vector<vector<char>> board (8, vector<char>(8));
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> board[i][j];
        }
    }
    
    int cnt = 0;
    solve (0, board, cnt);

    cout << cnt << endl;
}

int main() {
    runCases();
    return 0;
}