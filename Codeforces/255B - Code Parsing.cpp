#include <bits/stdc++.h>
using namespace std;
// 156,454,195,642

int main() {
    string str;
    cin >> str;

    int x = 0, y = 0;
    for (auto ch: str) {
        if (ch == 'x') x++;
        else y++;
    }

    bool x_greater = (x > y) ? true : false;
    for (int i = 0; i < abs(x - y); ++i)
        cout << (x_greater ? 'x' : 'y');
    cout << endl;
    return 0;
}

