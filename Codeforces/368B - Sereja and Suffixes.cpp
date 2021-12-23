#include <bits/stdc++.h>
using namespace std;

int mem[100100];
bool marks[100100];

vector<int> arr(1, 0);

int sol( int x, int n ) {
    if (mem[x] != -1) return mem[x];
    if (x > n) return 0;
    mem[x] = sol(x + 1, n) + (!marks[arr[x]] ? 1 : 0);
    marks[arr[x]] = 1;
    return mem[x];
}

int main() {
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;

    for (int i = 0; i <= n; ++i) mem[i] = -1;
    for (int i = 1; i <= n; ++i) {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    sol(1, n);

    while( q-- ) {
        int k; 
        cin >> k;
        cout << mem[k] << endl;
    }

    return 0;
}
