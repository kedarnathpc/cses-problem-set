#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void solve (int left, int right, string s, set<string> &st) {
    if (left == right) {
        st.insert(s);
        return;
    }

    for (int i = left; i <= right; ++i) {
        swap(s[i], s[left]);
        solve(left + 1, right, s, st);
        swap(s[i], s[left]);
    }
}

void runCases() {
    string s;
    cin >> s;
    int n = s.length();

    set<string> st;
    solve(0, n-1, s, st);

    cout << st.size() << endl;
    for (auto &i : st)
        cout << i << endl;
}

int main() {
    runCases();
    return 0;
}