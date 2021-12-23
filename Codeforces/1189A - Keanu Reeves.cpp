#include <bits/stdc++.h>
using namespace std;

int n;
string str;
int cnt[2];

int main() {
    cin >> n >> str;
    for (int i = 0; i < n; ++i) cnt[str[i] - '0']++;

    if ( cnt[0] != cnt[1] ) {
        cout << 1 << endl;
        cout << str << endl;
    } else {
        cout << 2 << endl;
        cout << str.substr(0, str.size() - 1) << ' ' << str[str.size() - 1] << endl;
    }

    return 0;
}
