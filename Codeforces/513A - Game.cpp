#include <bits/stdc++.h>
using namespace std;
struct info {int val, pos;};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    if (n2 >= n1) cout << "Second" << endl;
    else cout << "First" << endl;
    return 0;
}
