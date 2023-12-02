/*
.*  author: lakshmi_narayana
.*  created: 01.12.23 11:59:43
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

void dfs(int node, int par, vector<int> &res, vector<int> adj[]) {
    int cnt = 0;
    for (int child: adj[node]) {
        if (child != par) {
            dfs(child, node, res, adj);
            cnt += 1 + res[child];
        }
    }
    res[node] = cnt;
}

bool solve() {
    int n; cin >> n;
    vi adj[n + 1], res(n + 1);
    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }
    dfs(1, 0, res, adj);
    for (int i = 1; i <= n; i++) {
        cout << res[i] << ' ';
    }
    return true;
}

int32_t main() {
    FAST_IO;
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
        //cout << (solve() ? "YES" : "NO");
        cout << '\n';
    }
    return 0;
}
