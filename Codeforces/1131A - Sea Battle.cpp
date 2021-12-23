#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (h1 + h2 + 2) * 2 + (w1 - w2) + w1 + w2 << endl;
    return 0;
}
