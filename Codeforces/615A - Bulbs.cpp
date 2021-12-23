#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int buttons, bulbs;
    cin >> buttons >> bulbs;

    bool marks[bulbs + 1] {false};
    while(buttons--) {
        int connected, bulb_no;
        cin >> connected;

        for (int i = 0; i < connected; ++i) {
            cin >> bulb_no;
            marks[bulb_no] = true;
        }
    }


    bool is_possible = true;
    for (int i = 1; i <= bulbs; ++i) {
        if (!marks[i]) {
            is_possible = false;
            break;
        }
    }

    if (is_possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
