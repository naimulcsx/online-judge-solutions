#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int q, n, a, b;

int main() {
    cin >> q;
    while(q--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << max(n - a + 1, n - b + 1) << endl;
    }
    return 0;   
}

