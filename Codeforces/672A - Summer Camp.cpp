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

    string s = "";
    for (int i = 1; i <= 1000; ++i) 
        s += to_string(i);

    cout << s[n - 1] << endl;
    return 0;
}
