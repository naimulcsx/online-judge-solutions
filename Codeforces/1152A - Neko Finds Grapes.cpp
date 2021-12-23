#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), keys(m);
    int o1 = 0, e1 = 0, o2 = 0, e2 = 0;

    for (auto &el: arr) {
        cin >> el;
        if (el & 1) o1++;
        else e1++;
    }

    for (auto &el: keys) {
        cin >> el;
        if (el & 1) o2++;
        else e2++;
    }

    cout << min(o2, e1) + min(o1, e2) << endl;
    return 0;
}

