#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int p = i % 4;
        if (p == 1 || p == 2) printf("a");
        else printf("b");
    }
    return 0;
}
