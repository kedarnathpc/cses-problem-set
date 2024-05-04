#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void solve(int n, vector<vector<int>> &moves, int src, int aux, int dest) {
    if (n == 1){
        moves.push_back({src, dest});
        return;
    }
    
    solve (n-1, moves, src, dest, aux);
    moves.push_back({src, dest});
    solve (n-1, moves, aux, src, dest);
}

void runCases() {
    int n;
    cin >> n;

    vector<vector<int>> moves;
    solve(n, moves, 1, 2, 3);

    cout << moves.size() << endl;
    for (auto &i : moves)
        cout << i[0] << " " << i[1] << endl;
}

int main() {
    runCases();
    return 0;
}