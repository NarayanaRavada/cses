/*
.*  author: lakshmi_narayana
.*  created: 16.12.23 12:41:35
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int res = 0;
    while (n > 0) {
        n /= 5;
        res += n;
    }
    cout << res;
    return 0;
}
