/*
.*  author: lakshmi_narayana
.*  created: 06.12.23 22:17:39
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> dp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it == dp.end()) {
            dp.push_back(x);
        }
        else {
            *it = x;
        } 
    }
    cout << dp.size();
    return 0;
}
