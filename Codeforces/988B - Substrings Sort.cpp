#include <bits/stdc++.h>
using namespace std;

string str[110];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> str[i];

    sort( str + 1, str + n + 1, [](string a, string b) {
        return a.size() < b.size();
    });

    for (int i = 2; i <= n; ++i) {
        if ( str[i].find(str[i - 1]) == string::npos ) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; ++i) cout << str[i] << endl;
    return 0;
}
