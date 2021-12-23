#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int k;
    string n; 
    cin >> n >> k;

    int sz = n.size(), cnt = 0, i;
    for (i = sz - 1; i >= 0; --i) {
        if (cnt == k) break;
        if (n[i] == '0') cnt++;
    }

    if ( i == -1 ) {
        if (n.find("0") == string::npos) cout << sz << endl;
        else cout << sz - 1 << endl;
    }

    else {
        int cnt = 0;
        for (int j = i + 1; j < sz; ++j) if (n[j] != '0') cnt++;
        cout << cnt << endl;
    }

    return 0;
}
