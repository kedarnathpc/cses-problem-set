#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void runCases() {
    ll n;
    cin >> n;
    ll count = 0;

    while (n) {
        count += n/5;
        n /= 5;
    }   

    cout << count << endl;
}

int main() {
    runCases();
    return 0;
}