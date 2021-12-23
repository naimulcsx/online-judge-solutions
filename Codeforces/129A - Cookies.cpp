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

    int val, odds = 0, evens = 0;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        if (val % 2 == 1) odds++;
        else evens++;
    }

    if (odds % 2 == 1) cout << odds << endl;
    else cout << evens << endl;
    return 0;
}
