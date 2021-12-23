#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n & 1)  printf("3\n");
    else if (n == 2) printf("4\n");
    else printf("%d\n", n - 2);
    return 0;
}
