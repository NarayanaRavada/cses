/*
.*  author: lakshmi_narayana
.*  created: 03.12.23 13:06:07
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> dp(n + 1, INT_MAX/2);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (auto ch: to_string(i)) {
            int d = ch - '0';
            if (i >= d) {
                dp[i] = min(1 + dp[i - d], dp[i]);
            }
        }
    }
    cout << dp[n];
    return 0;
}
