#include <bits/stdc++.h>
using ll = long long;
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);

    int n, k;
    scanf("%d %d", &n , &k);

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        scanf("%d", &a);
        if (a <= 5 - k) cnt++;
    }

    cout << cnt / 3 << endl;
    return 0;
}