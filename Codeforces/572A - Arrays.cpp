#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m, k, l;
    cin >> n >> m >> k >> l;

    vector<int> list1(n), list2(m);
    for (auto &el: list1) cin >> el;
    for (auto &el: list2) cin >> el;
    reverse(begin(list2), end(list2));

    int last1 = list1[k - 1], last2 = list2[l - 1];

    if (last1 < last2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
