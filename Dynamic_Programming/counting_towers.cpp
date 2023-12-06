/*
   .*  author: lakshmi_narayana
   .*  created: 04.12.23 14:25:14
   */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;
const int MOD = 1e9 + 7;
long long dp[MAXN][2];

int main() {
    int tt; cin >> tt;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i = 2; i <= MAXN; i++) {
        dp[i][0] = (4 * dp[i - 1][0] + dp[i - 1][1]) % MOD;
        dp[i][1] = (dp[i - 1][0] + 2 * dp[i - 1][1]) % MOD; 
    }
    while(tt--) {
        int n; cin >> n;
        cout << (dp[n][0] + dp[n][1]) % MOD;
        cout << '\n';
    }
    return 0;
}
