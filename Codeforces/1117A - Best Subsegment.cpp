#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    scanf("%d", &n);
    vector<int> a(n);

    int mx = 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]), mx = max(mx, a[i]);

    int i = 0, cnt = 0, res = 0;
    while( i < n ) {
        if (a[i] == mx) cnt++;
        else cnt = 0;
        res = max(res, cnt);
        ++i;
    }

    printf("%d\n", res);
    return 0;   
}
