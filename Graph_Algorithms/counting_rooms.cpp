/**
 * 	  author: lakshminarayana_r
 * 	  created: 22.09.2022 15:41:57
 **/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if (ch == '.')
                adj[i][j] = 1;
        }
    }

    function<void(int, int)> dfs = [&](int i, int j) {
        if (adj[i][j] == 0)
            return;

        adj[i][j] = 0;
        vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for (auto it : d) {
            int dx = it.first, dy = it.second;
            if (i + dx >= 0 && i + dx < n && j + dy >= 0 && j + dy < m &&
                    adj[i + dx][j + dy] == 1) {
                dfs(i + dx, j + dy);
            }
        }
    };

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (adj[i][j] == 1) {
                count++;
                dfs(i, j);
            }
        }
    }

    cout << count;
    return 0;
}
