#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int n, x, y;
    cin >> n >> x >> y;

    string str;
    cin >> str;

    y++; x++;
    int k = 1, s = 0;
    for (int i = n - 1; k != x; --i) {
        if (k < y && str[i] == '1') s++;
        else if (k > y && str[i] == '1') s++;
        else if (k == y && str[i] == '0') s++;
        k++;
    }

    cout << s << endl;
    return 0;
}
