/*
.*  author: lakshmi_narayana
.*  created: 17.12.23 11:04:17
*/

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

set<string> st;

int main() {
    string s; cin >> s;
    string orig = s;
    sort(s.begin(), s.end());
    st.insert(s);
    while (next_permutation(s.begin(), s.end())) {
        st.insert(s);
    }
    cout << st.size() << '\n';
    for (auto it: st) {
        cout << it << '\n';
    }
    return 0;
}
