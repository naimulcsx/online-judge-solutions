#include <bits/stdc++.h>
using namespace std;

int arr[30];

int main() {
    int n, mx = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        mx = max(mx, arr[i]);
    }

    if (mx <= 25) printf("0");
    else printf("%d", mx - 25);
    return 0;
}
