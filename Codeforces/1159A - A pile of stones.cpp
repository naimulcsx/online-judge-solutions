#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        char ch;
        cin >> ch;
        if (ch == '+') res++;
        else res = max(0, res - 1);
    }

    cout << res << endl;
    return 0;
}
