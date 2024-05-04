#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int n;
    cin >> n;
    vector<int> nums;
    vector<string> binary;

    for (int i = 0; i < (1 << n); ++i)
        nums.push_back(i ^ (i >> 1));
    
    for (auto &it : nums) {
        string s = "";
        while (it) {
            if (it & 1)
                s += '1';
            else
                s += '0';
            it >>= 1;
        }
        for (int i = s.length(); i < n; ++i)
            s += '0';
        reverse(s.begin(), s.end());
        binary.push_back(s);
    }

    for (auto &i : binary)
        cout << i << endl;
}   

int main() {
    runCases();
    return 0;
}