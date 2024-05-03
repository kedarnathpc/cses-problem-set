#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    ll n;
    cin >> n;
    ll power = 1;

    while (n--) {
        power = (power * 2) % mod;
    }

    cout << power % mod << endl;
}

int main() {
    runCases();
    return 0;
}