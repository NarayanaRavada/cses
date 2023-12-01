/*
.*  author: lakshmi_narayana
.*  created: 28.11.23 14:14:14
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
    int n;
    cin >> n;
    vi adj[n + 1];

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    function<pii(int)> bfs = [&] (int start) {
        queue<int> q;
        vector<bool> vis(n + 1, false);
        q.push(start);
        vis[start] = true;
        int dist = 0, node = start;
        while (!q.empty()) {
            int sz = q.size();

            for (int i = 0; i < sz; i++) {
                node = q.front();
                q.pop();

                for (auto it: adj[node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
            dist++;
        }
        return (pii){node, dist - 1};
    };
    auto [node, dist] = bfs(1);
    auto [noder, distr] = bfs(node);
    cout << distr;
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
