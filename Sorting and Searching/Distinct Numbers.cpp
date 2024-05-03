#include <bits/stdc++.h>
using namespace std;
#define ll long long

void runCases() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    
    set<int> s;
    for(auto &i : arr)
        s.insert(i);

    cout << s.size() << endl;
}

int main() {
    runCases();
    return 0;
}