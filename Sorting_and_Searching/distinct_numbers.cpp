/*
.*  author: lakshmi_narayana
.*  created: 21.10.23 20:55:07
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); cout.tie(NULL);    
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        s.insert(num);
    }
    cout << s.size() << '\n';
    return 0;
}
