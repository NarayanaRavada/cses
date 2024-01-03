/*
.*  author: lakshmi_narayana
.*  created: 17.12.23 11:49:21
*/

#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x: arr) cin >> x;
    int diff = INT_MAX;
    for (int i = 1; i < (1 << n); i++) {
        int a = 0, b = 0;
        for (int k = 0; k < n; k++) {
            if ((i >> k) & 1) {
                a += arr[k];
            } else {
                b += arr[k];
            }
        }
        diff = min(diff, abs(a - b));
    }
    cout << diff;
    return 0;
}
