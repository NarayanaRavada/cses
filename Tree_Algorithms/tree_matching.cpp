/*
.*  author: lakshmi_narayana
.*  created: 01.12.23 12:26:10
*/

#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define FAST_IO                        \
    ios_base::sync_with_stdio(false);  \
    cin.tie(NULL); cout.tie(NULL);    

using pii = pair<int, int>;
using vi = vector<int>;
using vpii = vector<pii>;

bool solve() {
    int n; cin >> n;
    vi adj[n];
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return true;
}

int32_t main() {
    FAST_IO;
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
        //cout << (solve() ? "YES" : "NO");
        cout << '\n';
    }
    return 0;
}
