#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int res = ( (m - 1) +  k ) % n;
    if (res < 0 ) res += n;

    cout << res + 1 << endl;
    return 0;
}
