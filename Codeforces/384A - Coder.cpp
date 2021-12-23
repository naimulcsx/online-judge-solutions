#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;  

    int cnt = 0;
    bool flag = true;
    stringstream ss;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (flag) {
                if (j % 2 == 0) ss << '.';
                else ss << 'C', cnt++;
            } else {
                if (j % 2 == 0) ss << 'C', cnt++;
                else ss << '.';
            }
        }
        ss << endl;
        flag = !flag;
    }

    cout << cnt << endl;
    cout << ss.str();
    return 0;
}