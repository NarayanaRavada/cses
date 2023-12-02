/*
.*  author: lakshmi_narayana
.*  created: 02.12.23 17:09:30
*/

#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define FAST_IO                        \
    ios_base::sync_with_stdio(false);  \
    cin.tie(NULL); cout.tie(NULL);    
#define F first
#define S second
#define pb pushback
#define nl << '\n'
#define sp << ' ' <<
#define sz(v) ((int)(v.size()))
#define all(v) v.begin(), v.end()
#define input(v) for (auto &it: v) cin >> it;
#define FOR(k, s, e) for(int k = s; k < e; k++)
#define F0R(k, n) for(int k = 0; k < n; k++)

using pii = pair<int, int>;
using vi = vector<int>;
using vpii = vector<pii>;

bool solve() {
    string s; cin >> s;
    s.push_back('#');
    int n = s.length(), len = 1, maxLen = 0;
    FOR(i, 1, n) {
        if (s[i] != s[i - 1]) {
            maxLen = max(len, maxLen);
            len = 0;
        } 
        len++;
    }
    cout << maxLen;
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
