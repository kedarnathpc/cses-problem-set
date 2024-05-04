#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

long long solve (int i, ll sum1, ll sum2, vector<ll> &weights) {
    if (i == -1) 
        return abs(sum1 - sum2);
    
    ll diff1 = solve(i - 1, weights[i] + sum1, sum2, weights);
    ll diff2 = solve(i - 1, sum1, weights[i] + sum2, weights);

    return min(diff1, diff2);
}

void runCases() {
    int n;
    cin >> n;
    vector<ll> weights(n);
    for (int i = 0; i < n; ++i)
        cin >> weights[i];

    ll mini = solve(n-1, 0, 0, weights);

    cout << mini << endl;
}

int main() {
    runCases();
    return 0;
}