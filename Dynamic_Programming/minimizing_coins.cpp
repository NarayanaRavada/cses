/*
.*  author: lakshmi_narayana
.*  created: 02.12.23 21:52:12
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target; cin >> n >> target;
    vector<int> coins(n);
    for(auto &x: coins) cin >> x;
    vector<int> dp(target + 1, INT_MAX/2);
    dp[0] = 0;
    for(int i = 1; i <= target; i++) {
        for(int j = 0; j < n; j++) {
            if (i >= coins[j]) {
                dp[i] = min(dp[i - coins[j]] + 1, dp[i]);
            }
        }
    }
    cout << (dp[target] == INT_MAX/2 ? -1 : dp[target]);
    return 0;
}
