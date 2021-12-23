#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> boys(n);
    for (auto &el: boys) cin >> el;

    int m;
    cin >> m;
    vector<int> girls(m);
    for (auto &el: girls) cin >> el;

    sort(begin(boys), end(boys));
    sort(begin(girls), end(girls));

    int i = 0, j = 0, r = boys.size(), r2 = girls.size(), cnt = 0;
    while( i < r && j < r2 ) {
        if(abs(boys[i] - girls[j]) <= 1) cnt++, ++i, ++j;
        else if (boys[i] < girls[j]) ++i;
        else ++j;
    }

    cout << cnt << endl;

    return 0;
}
