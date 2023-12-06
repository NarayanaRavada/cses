/*
.*  author: lakshmi_narayana
.*  created: 03.12.23 14:22:30
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, x; cin >> n >> x;
    vector<int> price(n), pages(n);
    for (auto &it: price) cin >> it;
    for (auto &it: pages) cin >> it;
    int dp[n + 1][x + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= price[i - 1]) {
                dp[i][j] = max(dp[i][j], pages[i - 1] + dp[i - 1][j - price[i - 1]]);
            }
        }
    }
    cout << dp[n][x];
    return 0;
}
