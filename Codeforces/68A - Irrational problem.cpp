#include <bits/stdc++.h>
using namespace std;

int res[31515];
int p1, p2, p3, p4, a, b;
int fn(int n) {
    return (((n % p1) % p2) % p3) % p4;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;

    for (int i = 0; i <= 31415; ++i) 
        if (fn(i) == i) res[i] = 1;
    for (int i = 1; i <= 31415; ++i) res[i] += res[i - 1];

    if (a == 0) cout << res[b] << endl;
    else cout << res[b] - res[a - 1] << endl;
    return 0;
}
