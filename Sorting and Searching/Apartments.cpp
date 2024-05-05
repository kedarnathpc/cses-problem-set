#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> apartments(n), desired(m);
    for (int i = 0; i < n; ++i) 
        cin >> apartments[i];
    for (int i = 0; i < m; ++i)
        cin >> desired[i];

    priority_queue<ll, vector<ll>, greater<ll>> ap, de;
    for (auto &i: apartments)
        ap.push(i);
    for (auto &i : desired)
        de.push(i);

    int count = 0;

    while (!ap.empty() && !de.empty()) {
        ll left = de.top()-k, right = de.top()+k;
        if (ap.top() >= left && ap.top() <= right) {
            count++;
            ap.pop();
            de.pop();
        }
        else if (ap.top() > right) {
            de.pop();
        }
        else if (ap.top() < left) {
            ap.pop();
        }
        else break;
    }

    cout << count << endl;
}

int main() {
    runCases();
    return 0;
}