#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; ++i) {
        if (str[i] == '4' || str[i] == '7') continue;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    int mid = n / 2, s1 = 0, s2 = 0;
    for (int i = 0; i < mid; ++i) s1 += str[i] - '0';
    for (int i = mid; i < n; ++i) s2 += str[i] - '0';

    if (s1 == s2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
