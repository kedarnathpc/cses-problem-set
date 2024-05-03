#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; ++i) {
        ll total = ((i*i) * (i*i - 1))/2;
        ll attack = 4 * ((i-1) * (i-2));
        cout << total - attack << endl;
    }   
}

int main() {
    runCases();
    return 0;
}