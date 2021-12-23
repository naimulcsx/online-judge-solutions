#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int mn = min(n, m), cnt = 0;
    for (int i = 0; i <= mn; ++i) {
        for (int j = 0; j <= mn; ++j) {
            if (i * i + j == m && j * j + i == n) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;   
}
