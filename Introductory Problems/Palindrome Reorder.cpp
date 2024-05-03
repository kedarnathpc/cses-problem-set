#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

static bool cmp (pair<char, ll> p1, pair<char, ll> p2) {
    return p1.second > p2.second;
}

void runCases() {
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, ll> mp;

    for(auto &i : s)
        mp[i]++;

    int oddCount = 0;
    for (auto &i : mp)
        if (i.second & 1)
            oddCount++;

    if (oddCount > 1)
        cout << "NO SOLUTION" << endl;
    else {
        vector<pair<char, ll>> freq;
        string res = "";
        for (auto &i : mp)
            freq.push_back({i.first, i.second});
        
        sort(freq.begin(), freq.end(), cmp);

        for (auto &i : freq) {
            int cnt = i.second / 2;
            while (cnt--) {
                res += i.first;
            }
        }

        if (oddCount == 1) {
            for (auto &i : freq) {
                if (i.second % 2 == 1) {
                    res += i.first;
                    i.second--; 
                    break;
                }
            }
        }

        reverse(freq.begin(), freq.end());

        for (auto &i : freq) {
            int cnt = i.second / 2;
            while (cnt--) {
                res += i.first;
            }
        }

        cout << res << endl;
    }   
}

int main() {
    runCases();
    return 0;
}