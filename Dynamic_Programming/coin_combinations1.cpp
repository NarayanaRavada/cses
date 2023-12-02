/*
.*  author: lakshmi_narayana
.*  created: 02.12.23 22:33:04
*/

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, target; cin >> n >> target;
    vector<int> coins(n);
    for (auto &x: coins) cin >> x;
    int dp[target + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= target; i++) {
        for(int j = 0; j < n; j++) {
            if (i >= coins[j]) {
                dp[i] += dp[i - coins[j]];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[target];
    return 0;
}
