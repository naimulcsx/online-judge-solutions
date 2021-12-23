#include <bits/stdc++.h>
using namespace std;

int cnt[26];

int main() {
    ios::sync_with_stdio(false);
    int k;
    string str;
    cin >> k >> str;
    if (k == 1) {
        cout << str << endl;
        return 0;
    }

    for (auto el: str) cnt[el - 'a']++;

    vector<pair<char, int>> arr;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] != 0 & cnt[i] % k != 0) {
            cout << -1 << endl;
            return 0;
        }
        if (cnt[i] != 0) arr.push_back({i + 'a', cnt[i]});
    }

    for (int i = 0; i < k; ++i) {
        for (auto el: arr) {    
            int per = el.second / k;
            for (int i = 0; i < per; ++i) cout << el.first;
        }
    }

    return 0;   
}
