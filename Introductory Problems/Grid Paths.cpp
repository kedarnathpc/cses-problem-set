#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void solve (int row, int col, vector<vector<char>> &board) {
    if (row == 6 && col == 0) {
        count++;
        return;
    }
    if (row < 0 || row >= 7 || col < 0 || col >= 7 || board[row][col] == '$')
        return;
    
    if (board[row][col] == '.') {
        board[row][col] = '$';
        solve (row, col + 1, board);
        board[row][col] = '.';
    }
    if (board[row][col] == '.') {
        board[row][col] = '$';
        solve (row + 1, col, board);
        board[row][col] = '.';
    }
    if (board[row][col] == '.') {
        board[row][col] = '$';
        solve (row, col - 1, board);
        board[row][col] = '.';
    }
    if (board[row][col] == '.') {
        board[row][col] = '$';
        solve (row - 1, col, board);
        board[row][col] = '.';
    }
}

void runCases() {
    string s;
    cin >> s;

    vector<vector<char>> board(7, vector<char> (7, '.'));
    int count = 0;
    solve();

    cout << count << endl;   
}

int main() {
    runCases();
    return 0;
}