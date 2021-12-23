#include <bits/stdc++.h>
using namespace std;

int cnt[5];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int k;
        scanf("%d", &k);
        cnt[k]++;
    }

    int k = min(cnt[2], cnt[1]), res = 0;
    cnt[1] -= k, cnt[2] -= k;
    res += k + (cnt[1] / 3);

    printf("%d\n", res);
    return 0;
}
