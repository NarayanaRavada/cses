/*
.*  author: lakshmi_narayana
.*  created: 17.12.23 19:43:16
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(n);
    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    while (i < n) {
        while (j < m && a[i] > b[i] + k) {
            j++;
        }
        i++;
    }
    return 0;
}
