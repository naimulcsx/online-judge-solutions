#include <bits/stdc++.h>
using namespace std;

int sum(int n) { return (n * (n + 1)) / 2 ; }

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int mid = (a + b) / 2;
    printf("%d\n", sum(abs(a - mid)) + sum(abs(b - mid)) );
    return 0;
}
