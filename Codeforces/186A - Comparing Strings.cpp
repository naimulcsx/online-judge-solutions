#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) cout << "NO" << endl;
    else {
        vector<int> pos;
        int l = a.size(), diff = 0;
        for (int i = 0; i < l; ++i)
            if (a[i] != b[i]) diff++, pos.push_back(i);;

        if (diff == 1 || diff > 2) cout << "NO" << endl;
        else {
            swap(a[pos[0]], a[pos[1]]);
            if (a != b) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
     
    return 0;
}
