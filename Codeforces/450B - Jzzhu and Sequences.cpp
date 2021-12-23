#include <bits/stdc++.h>
using namespace std;
const int m = 1000000007;

int main() {
    int f1, f2, f3;
    cin >> f1 >> f2;
    f3 = f2 - f1;

    int n, res;
    cin >> n;
    vector<int> arr {0, f1, f2, f3, -f1, -f2, -f3};

    int k = n % 6;
    res = arr[k] % m;
    if ( k == 0 ) res = arr[6] % m;
    if (res < 0) res += m;

    cout << res << endl;
    return 0;
}
