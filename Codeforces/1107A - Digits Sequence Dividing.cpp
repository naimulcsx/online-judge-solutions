#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int q;
    cin >> q;
    while(q--) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 1) cout << "NO" << endl;
        else if (n == 2) {
            if ( s[0] < s[1] ) {
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << s[0] << " " << s[1] << endl;
            } else cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s.substr(0, 1) << " " << s.substr(1, s.length() - 1) << endl;
        }
    }

    return 0;
}
