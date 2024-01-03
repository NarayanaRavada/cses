/*
.*  author: lakshmi_narayana
.*  created: 16.12.23 11:21:36
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    if (n%4 && (n + 1)%4) {
        cout << "NO";
    } else {
        cout << "YES" << '\n';
        int mid = (n + 1)/4;
        cout << n/2 << '\n';
        for (int i = 1; i <= mid; i++) {
            if (i == mid && n & 1) {
                cout << n - i + 1 << ' '; 
                continue;
            }
            cout << i << ' ' << n - i + 1 << ' ';
        }
        cout << '\n' << (n + 1)/2 << '\n';
        for (int i = mid; i <= n - mid; i++) {
            if (i == mid && (n & 1) == 0) {
                continue;
            }
            cout << i << ' '; 
        }
    }
    return 0;
}
