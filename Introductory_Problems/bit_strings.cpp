/*
.*  author: lakshmi_narayana
.*  created: 16.12.23 12:39:39
*/

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    int res = 1;
    for (int i = 0; i < n; i++) {
        (res *= 2) %= MOD;
    }
    cout << res;
    return 0;
}
