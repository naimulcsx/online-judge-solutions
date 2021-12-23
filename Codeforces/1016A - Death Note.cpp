#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int curr_page = 0;
    for (int i = 0; i < n; ++i) {
        int p;
        scanf("%d", &p);

        if ( curr_page + p < k ) {
            cout << 0 << ' ';
            curr_page += p;
        } else if ( curr_page + p > k ) {
            int res = 1;
            int left = p - (k - curr_page);
            res += (left / k);
            curr_page = left % k;
            cout << res << ' ';
        } else {
            cout << 1 << ' ';
            curr_page = 0;
        }
    }

    cout << endl;
    return 0;
}
