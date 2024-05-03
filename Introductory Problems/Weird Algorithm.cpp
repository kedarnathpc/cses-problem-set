#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n & 1)
            n = n * 3 + 1;
        else    
            n /= 2;
        cout << n << " ";
    }
}

int main() {
    runCases();
    return 0;
}