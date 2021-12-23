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
    
    if (n % 10 < 5) cout << n - (n % 10) << endl;
    else cout << n + 10 - (n % 10) << endl;
    return 0;
}