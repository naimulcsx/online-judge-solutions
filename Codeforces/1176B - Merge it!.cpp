#include <bits/stdc++.h>
using namespace std;

int mod[3];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d", &n);

        for (int i = 1; i <= n; ++i) {
            scanf("%d", &k);
            mod[k % 3]++;
        }

        int res = min( mod[1], mod[2] );
        mod[1] -= res, mod[2] -= res;
        res += (mod[1] / 3) + (mod[2] / 3) + mod[0];

        printf("%d\n", res);
        memset(mod, 0, sizeof(mod));
    }

    return 0;
}

