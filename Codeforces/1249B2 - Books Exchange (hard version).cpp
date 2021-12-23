#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int id[200200], sz[200200];

int root(int n) {
    int r = n;
    while(id[n] != n) n = id[n];
    while(r != n) {
        int newr = id[r];
        id[r] = n;
        r = newr;
    }
    return n;
}
 
void uni(int p, int q) {
    int i = root(p), j = root(q);
    if ( i == j ) return;
    if ( sz[i] > sz[j] ) swap(i, j);
    id[i] = id[j];
    sz[j] += sz[i];
}

int main() {
    ios::sync_with_stdio(false);

    int q;
    scanf("%d", &q);
    while(q--) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) id[i] = i, sz[i] = 1;

        int k;
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &k);
            uni(i, k);
        }

        for (int i = 1; i <= n; ++i) {
            printf("%d ", sz[root(i)]);
        }
        printf("\n");
    }

    return 0;
}
