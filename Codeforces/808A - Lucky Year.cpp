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

    if (n < 10)
        cout << 1 << endl;

    else {
        int post = 1;
        for (int i = 1; i < to_string(n).length(); ++i) post *= 10;
        cout << (to_string(n)[0] - '0' + 1) * post - n << endl;
    }

    return 0;
}
