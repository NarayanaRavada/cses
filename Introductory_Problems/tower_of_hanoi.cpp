/*
.*  author: lakshmi_narayana
.*  created: 17.12.23 10:08:43
*/

#include <bits/stdc++.h>
using namespace std;

void util(int from, int to, int mid, int n) {
    if (n == 0) return;
    util(from, mid, to, n - 1);
    cout << from << ' ' << to << '\n';
    util(mid, to, from, n - 1);
}

int main() {
    int n; cin >> n;
    cout << (1<<n) - 1 << '\n';
    util(1, 3, 2, n);
    return 0;
}
