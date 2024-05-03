#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll count = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll mini = arr[0];
    for (ll i = 1; i < n; ++i) {
        if (arr[i] < mini) {
            count += abs(arr[i] - mini);
            arr[i] = mini;
        }
        mini = arr[i];
    }

    cout << count << endl;
}

int main() {
    runCases();
    return 0;
}