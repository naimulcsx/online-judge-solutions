#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int sz;
    string a, b;
    cin >> sz >> a >> b;

    if ( a.size() != b.size() ) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> res;


    for (int i = 0; i < sz; ++i) {
        int pos = -1;
        char target_char = b[i];
        if (target_char == a[i]) continue;

        for (int j = i; j < sz; ++j) {
            if (target_char == a[j]) {
                pos = j;
                break;
            }
        }

        if (pos == -1) {
            cout << -1 << endl;
            return 0;
        }

        for (int j = pos - 1; j >= i; --j) {
            swap(a[j], a[j + 1]);
            res.push_back(j);
        }
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el + 1 << ' ';
    cout << endl;
    return 0;
}
