#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    string s;
    cin >> s;

    ll maxi = 1, count = 1;
    for(int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i-1]) {
            count++;
            maxi = max(maxi, count);
        }
        else 
            count = 1;
    }

    cout << maxi << "\n";
}

int main() {
    runCases();
    return 0;
}