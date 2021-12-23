#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);

    bool flag = false;
    int p, q, mn = INT_MAX, left;

    for (int a = 0; 4 * a <= n; ++a) {
        left = n - (a * 4);
        if ( left % 7 == 0 ) {
            int b = left / 7;
            if ( a + b < mn ) {
                mn = a + b;
                p = a, q = b;
                flag = true;
            }
        }
    }

    if (!flag) {
        printf("-1\n");
        return 0;
    }

    while(p--) printf("4");
    while(q--) printf("7");
    printf("\n");
    return 0;
}
