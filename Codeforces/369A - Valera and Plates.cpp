#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int d;
        scanf("%d", &d);
        if (d == 1) {
            if (m > 0) m--;
            else cnt++;
        } else if (d == 2) {
            if (k > 0) k--;
            else if (m > 0) m--;
            else cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}