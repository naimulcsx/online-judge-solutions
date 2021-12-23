#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int lines = 2 * n + 1;
    for (int i = 1; i <= lines; ++i) {
        if (i == n + 1) {
            for (int i = 0; i <= n; ++i) cout << i << ' ';
            for (int i = n - 1; i > 0; --i) cout << i << ' ';
            cout << 0 << endl;
        } else {
            int tot_space = 2 * n;
            int t = i - 1;
            if (i > n + 1) t = lines - i;
            
            int req_sp = tot_space - ((t + 1) * 2) + 2;
            for (int i = 0; i < req_sp; ++i) cout << ' ';

            if (t == 0) cout << 0 << endl;
            else {
                for (int i = 0; i <= t; ++i) cout << i << ' ';
                for (int i = t - 1; i > 0; --i) cout << i << ' ';
                cout << 0 << endl;
            }
        }
    }
    return 0;   
}
