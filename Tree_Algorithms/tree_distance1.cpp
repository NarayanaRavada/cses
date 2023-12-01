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

int bfs(int start, vector<int> adj[], int dist[], int n) {
    queue<int> q;
    vector<bool> vis(n + 1, false);
    q.push(start);
    vis[start] = true;
    dist[start] = 0;
    int dis = 0, node = start;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            node = q.front();
            q.pop();

            for (auto it: adj[node]) {
                if (!vis[it]) {
                    vis[it] = true;
                    dist[it] = dis;
                    q.push(it);
                }
            }
        }
        dis++;
    }
    return node;
};

bool solve() {
    int n;
    cin >> n;
    vi adj[n + 1];
    int dist1[n + 1], dist2[n + 1];

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int end1 = bfs(1, adj, dist1, n);
    int end2 = bfs(end1, adj, dist2, n);
    bfs(end2, adj, dist1, n);

    for(int i = 1; i < n + 1; i++) {
        cout << max(dist1[i], dist2[i]) + (n != 1) << ' ';
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
