#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int n, m;
    cin >> n >> m;

    int freq[n + 1] {0};
    bool marks[n + 1];
    memset(marks, false, n + 1);

    int count = 0;
    while(m--) {
        int diff; cin >> diff;
        freq[diff]++;

        if ( !marks[diff] ) {
            marks[diff] = true;
            count++;
        }

        if (count == n) {
            for (int i = 1; i <= n; ++i) {
                freq[i]--;
                if (freq[i] == 0) {
                    marks[i] = false;
                    count--;
                }
            }

            cout << "1";
        } else cout << "0";
    }
    cout << endl;
    return 0;
}
