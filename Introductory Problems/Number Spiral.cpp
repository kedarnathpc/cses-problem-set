#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void runCases() {
    ll t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;

        if (y > x) {
            ll area = (y-1) * (y-1);
            if (y & 1) {
                cout << area + x << endl;
                continue;
            } else {
                cout << area + (2 * y - x) << endl;
                continue;
            }
        } else {
            ll area = (x-1) * (x-1);
            if (x & 1) {
                cout << area + (2 * x - y) << endl;
                continue;
            } else {
                cout << area + y << endl;
                continue;
            }
        }
    }
}

int main() {
    runCases();
    return 0;
}