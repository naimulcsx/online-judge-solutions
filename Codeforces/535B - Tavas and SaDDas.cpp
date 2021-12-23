#include <bits/stdc++.h>
using namespace std;

string n;
int cnt = 0, ans;
void sol(int len, string res) {
    if ( len == 0 ) {
        cnt++;
        if ( res == n ) ans = cnt;
        return;
    }
    sol(len - 1, res + "4");
    sol(len - 1, res + "7");
}

int main() {
    cin >> n;
    sol(n.size(), "");
    for (int i = 1; i < n.size(); ++i) ans += pow(2, i);
    cout << ans << endl;
    return 0;
}
