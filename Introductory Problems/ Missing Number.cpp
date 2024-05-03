#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    int n;
    cin >> n;
    vector<ll> arr(n-1);
    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    ll sum = 0;
    for(int i = 0; i < n-1; i++) {
        sum += arr[i];
    }
    cout << (long long)n*(n+1)/2 - sum << endl;   
}

int main() {
    runCases();
    return 0;
}