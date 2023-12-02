/*
.*  author: lakshmi_narayana
.*  created: 02.12.23 22:38:33
*/

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, target; cin >> n >> target;
    vector<int> coins(n);
    for(auto &x: coins) cin >> x;
    int dp[n + 1][target + 1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - coins[i - 1] >= 0) {
                dp[i][j] += dp[i][j - coins[i - 1]];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[n][target];
    return 0;
}
