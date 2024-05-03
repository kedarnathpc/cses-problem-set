#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    ll n;
    cin >> n;

    ll total = (n * (n + 1)) / 2;
    if (total & 1)
        cout << "NO" << endl;
    else {
        ll half = total / 2;
        vector<ll> set1, set2;

        while (n) {
            if (half - n >= 0) {
                set1.push_back(n);
                half -= n;
            }
            else {
                set2.push_back(n);
            }
            n--;
        }
        cout << "YES" << endl << set1.size() << endl;
        for (auto &i : set1)
            cout << i << " ";
        cout << endl << set2.size() << endl;
        for (auto &i : set2)
            cout << i << " ";
    }
}

int main() {
    runCases();
    return 0;
}