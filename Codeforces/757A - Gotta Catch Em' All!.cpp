#include <bits/stdc++.h>
using namespace std;

int cnt[200];

int main() {
    string str;
    cin >> str;
    for (auto el: str) cnt[el]++;
    cnt['a'] /= 2;
    cnt['u'] /= 2;
    int res = INT_MAX;
    string name = "Bulbasaur";
    for (auto el: name) res = min(res, cnt[el]);
    cout << res << endl;
    return 0;
}
