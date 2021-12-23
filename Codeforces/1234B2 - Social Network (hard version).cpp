#include <bits/stdc++.h>
using ll = long long;
using namespace std;
 
set<int> marks;
int dq[501000];
 
int main() {
 
    int n, k;
    scanf("%d %d", &n, &k);
    int l = 500100, r = 500100;
 
    for (int i = 0; i < n; ++i) {
        int a;
        scanf("%d", &a);
 
        if ( marks.count(a) ) continue;
        if ( (r - l) < k ) {
            dq[l] = a;
            marks.insert(a);
            --l;
        } else {
            marks.erase(dq[r]);
            --r;
            dq[l] = a;
            marks.insert(a);
            --l;
        }
    }
 
    printf("%d\n", r - l);
    for (int i = l + 1; i <= r; ++i) printf("%d ", dq[i]);
    printf("\n");
    return 0;
}