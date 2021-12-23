#include <bits/stdc++.h>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    ulli n, total = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        ulli res = pow(2ULL, i);
        total += res;
    }

    cout << total << endl;
    return 0;
}
