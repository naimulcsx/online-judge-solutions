#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    bool flag = false;

    while(n--) {
        string name;
        int before, after;
        cin >> name >> before >> after;
        if (before < 2400) continue;
        if (after > 2400 && after - before > 0) {
            flag = true;
            break;
        }
    }

    if (flag)   cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
