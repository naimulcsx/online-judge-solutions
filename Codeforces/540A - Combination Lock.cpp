#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string from, to;
    cin >> n >> from >> to;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int f = from[i] - '0', t = to[i] - '0';
        if (abs(f - t) <= 5) count += abs(f - t);
        else count += 10 - abs(f - t);
    }

    cout << count << endl;
    return 0;
}
