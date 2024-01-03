/*
.*  author: lakshmi_narayana
.*  created: 17.12.23 10:46:27
*/

#include <bits/stdc++.h>
using namespace std;

void print_bin(int n, int precision) {
    for (int i = precision - 1; i >= 0; i--) {
        cout << ((n >> i) & 1 ? "1" : "0");
    }
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < (1 << n); i++) {
        print_bin(i ^ (i >> 1), n);
        cout << "\n";
    }
    return 0;
}
