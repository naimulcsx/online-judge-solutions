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

    set<int> data;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        if (input != 0) data.insert(input);
    }

    cout << data.size() << endl;
    return 0;
}
