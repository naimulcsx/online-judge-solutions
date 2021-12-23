#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    int p = k / 2;
    if (k & 1) p++;
    
    int c = p / m, r = (p % m == 0) ? m : p % m;
    if (p % m != 0) c++;
    
    printf("%d %d %c\n", c, r, (k & 1 ? 'L' : 'R'));
    return 0;
}
