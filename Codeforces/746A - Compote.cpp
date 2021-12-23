#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    while(a >= 1 && b >= 2 && c >= 4) {
        a--;
        b -= 2;
        c -= 4;
        count++;
    }
    cout << count * 7 << endl;
    return 0;
}
