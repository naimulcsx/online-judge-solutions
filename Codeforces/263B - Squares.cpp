#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    sort(rbegin(arr), rend(arr));
    k--;

    if (k < n) printf("%d %d\n", arr[k], arr[k]);
    else printf("-1\n");
    
    return 0;
}
