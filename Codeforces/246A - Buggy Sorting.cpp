#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 2) printf("-1");
    else for (int i = n; i > 0; --i) printf("%d ", i);
    printf("\n");
    
    return 0;
}
