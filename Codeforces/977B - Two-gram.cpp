#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n;
    string str;
    cin >> n >> str;
    map<string, int> mp;

    for (int i = 0; i < n - 1; ++i) {
        mp[str.substr(i, 2)]++;
    }   

    int mx = 0;
    string res;
    for (auto el: mp) {
        if (el.second > mx) {
            mx = el.second;
            res = el.first;
        }
    }

    cout << res << endl;
    return 0;
}