#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int w, h, v1, d1, v2, d2;
    cin >> w >> h >> v1 >> d1 >> v2 >> d2;

    for (int i = h; i >= 0; --i) {
        w += i;
        if(i == d1) w = max(w - v1, 0);
        else if (i == d2) w = max(w - v2, 0);
    }

    cout << w << endl;
    return 0;
}
