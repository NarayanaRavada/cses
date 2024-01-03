/*
.*  author: lakshmi_narayana
.*  created: 29.12.23 19:55:52
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &[l, r]: arr) {
        cin >> l >> r;
    }
    sort(arr.begin(), arr.end());
    ordered_set st;
    for (auto [l, r]: arr) {
        st.insert(r);
    }
    for (auto [l, r]: arr) {
        cout << st.order_of_key(r + 1) << ' ';
        st.erase(r);
    }
    return 0;
}
