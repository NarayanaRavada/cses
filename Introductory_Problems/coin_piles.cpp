/*
.*  author: lakshmi_narayana
.*  created: 16.12.23 12:49:03
*/

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int a, b;
        cin >> a >> b;
        cout << (((a + b)%3 || a > 2*b || b > 2*a) ? "NO": "YES");
        cout << '\n';
    }
    return 0;
}
