/*
.*  author: lakshmi_narayana
.*  created: 03.12.23 13:37:23
*/

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char ch; cin >> ch;
            if (ch != '*') {
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= MOD;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n][n];
    return 0;
}
