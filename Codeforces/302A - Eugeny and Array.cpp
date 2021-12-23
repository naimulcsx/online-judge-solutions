#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int one = 0, neg_one = 0;
    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        if (k == -1) neg_one++;
        else one++;
    }

    while(q--) {
        int l, r, n;
        scanf("%d %d", &l, &r);
        n = r - l + 1;

        bool flag = false;
        if (n % 2 == 0) {
            if (one >= n / 2 && neg_one >= n / 2) {
                printf("1\n");
                flag = true;
            }
        } 

        if (!flag) printf("0\n");
    }

    return 0;
}
