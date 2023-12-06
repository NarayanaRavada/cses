/*
.*  author: lakshmi_narayana
.*  created: 04.12.23 13:32:32
*/

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m; cin >> n >> m;
    vector<int> arr(n);
    for(int &x: arr) cin >> x;
    int dp[n + 1][100 + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= m; i++) {
        dp[1][i] = (arr[0] == 0 || i == arr[0]);
        dp[1][0] += dp[1][i];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = -1; k <= 1; k++) {
                if (j + k > 0 && j + k <= m) {
                    (dp[i][j] += dp[i - 1][j + k]) %= MOD;
                }
            }
            if (arr[i - 1] != 0 && j != arr[i - 1]) {
                dp[i][j] = 0;
            }
            (dp[i][0] += dp[i][j]) %= MOD;
        }
    }
    cout << dp[n][0];
    return 0;
}
