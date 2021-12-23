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
    bool pres[100010] {false};


    int count = 0, mx = 0;
    for (int i = 0; i < 2 * n; ++i) {
        int p;
        cin >> p;

        if (!pres[p]) pres[p] = true, count++;
        else pres[p] = false, count--;
        mx = max(count, mx);
    }

    cout << mx << endl;
    return 0;
}
