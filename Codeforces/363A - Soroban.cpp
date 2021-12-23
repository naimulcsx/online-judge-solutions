#include <bits/stdc++.h>
using namespace std;

unordered_map<int, string> ans {
    {0, "O-|-OOOO"},
    {1, "O-|O-OOO"},
    {2, "O-|OO-OO"},
    {3, "O-|OOO-O"},
    {4, "O-|OOOO-"},
    {5, "-O|-OOOO"},
    {6, "-O|O-OOO"},
    {7, "-O|OO-OO"},
    {8, "-O|OOO-O"},
    {9, "-O|OOOO-"},
};

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    if (n == 0) cout << ans[0] << endl;
    while( n > 0 ) {
        int lst = n % 10;
        cout << ans[lst] << endl;
        n /= 10;
    }
    return 0;   
}
