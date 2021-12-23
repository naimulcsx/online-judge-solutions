#include <bits/stdc++.h>
using namespace std;

int off[1100];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i) {
        int s;
        scanf("%d", &s);
        for (int j = s; j <= n; ++j) {
            if (off[j - 1] == 0) off[j - 1] = s;
        }    
    }

    for (int i = 0; i < n; ++i) printf("%d ", off[i]);
    printf("\n");
    return 0;
}
