#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int zerosAfter = 0, zerosBefore = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int i = 0; i < zerosBefore; ++i) cout << 0 << ' ';
        cout << k << ' ';
        for (int i = 0; i < zerosAfter; ++i) cout << 0 << ' ';
        cout << endl;
        zerosBefore--, zerosAfter++;
    }

    return 0;   
}
