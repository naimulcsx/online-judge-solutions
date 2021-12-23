#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int sum(int n) {
    if (n % 2 == 0) return n / 2 * (n + 1);
    return (n + 1) / 2 * n;
}

int main() {
    int n;
    cin >> n;

    int s = sum(n);
    
    for (int i = 2; i <= n; ++i) {
        if ( (s - i) % i == 0 ) {
            cout << "Yes" << endl;
            cout << 1 << ' ' << i << endl;
            cout << n - 1 << ' ';
            for (int k = 1; k <= n; ++k)
                if (k != i) cout << k << ' ';
            cout << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
