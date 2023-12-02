/*
.*  author: lakshmi_narayana
.*  created: 02.12.23 21:32:43
*/

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

using pii = pair<int, int>;
using vi = vector<int>;
using vpii = vector<pii>;

int main() {
    int n; cin >> n;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
                dp[i] %= mod;
            }
        } 
    }
    cout << dp[n];
    return 0;
}
