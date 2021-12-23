#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, p;
    cin >> n >> k >> p;
    int need = ceil( (n / 100.00) * p);
    cout << max(need - k, 0) << endl;
    return 0;
}
