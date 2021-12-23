#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int res = 0;
    while(n--) {
        int x, y;
        scanf("%d %d", &x, &y);
        res = max(res, x + y);
    }   

    printf("%d\n", res);
    return 0;
}
