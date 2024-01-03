/*
.*  author: lakshmi_narayana
.*  created: 16.12.23 17:13:33
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; cin >> s;
    vector<int> freq(26, 0);
    for (auto ch: s) {
        freq[ch - 'A']++;
    }
    string once = "";
    string res = "";
    for (int i = 0; i < 26; i++) {
        string temp(freq[i]/2, 'A' + i);
        res += temp;
        if (freq[i] & 1) {
            once += 'A' + i;
        } 
    }
    if (once.length() > 1) {
        cout << "NO SOLUTION";
    } 
    else {
        string rev = res;
        reverse(rev.begin(), rev.end());
        res += once + rev;
        cout << res;
    }

    return 0;
}
