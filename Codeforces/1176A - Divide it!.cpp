#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;   

        int cnt = 0;
        while(n > 1 && n % 5 == 0) n /= 5, n *= 4, cnt++;
        while(n > 1 && n % 3 == 0) n /= 3, n *= 2, cnt++;
        while(n > 1 && n % 2 == 0) n /= 2, cnt++;

        if (n == 1) cout << cnt << endl;
        else cout << -1 << endl;
    }

    return 0;
}
