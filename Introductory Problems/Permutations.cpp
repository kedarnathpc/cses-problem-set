#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    ll n;
    cin >> n;

    vector<int> arr;
    int i = 1;
    while (i <= n) {
        arr.push_back(i);
        i += 2;
    }

    i = 2;
    while (i <= n) {
        arr.push_back(i);
        i += 2;
    }

    if (n == 1)
        cout << "1" << endl;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else if (n == 4)
        cout << "2 4 1 3" << endl;
    else
        for (auto &i : arr)
            cout << i << " ";
}

int main() {
    runCases();
    return 0;
}