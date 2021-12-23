#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int res = (n / 3) * 2 ;
    if ( n % 3 != 0 ) res++;
    printf("%d\n", res);
    return 0;
}
