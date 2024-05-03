#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (max(a, b) > 2 * min(a, b)) {
            cout << "NO" << endl;
            continue;
        }
        if ((a + b)%3 == 0) {
            cout << "YES" << endl;
            continue;
        }
        else
            cout << "NO" << endl;
    }   
}

int main() {
    runCases();
    return 0;
}