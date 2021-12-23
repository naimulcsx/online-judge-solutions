#include <bits/stdc++.h>
using namespace std;

int arr[2200];

int main() {    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; ++i) scanf("%d", &arr[i]);

    sort(arr, arr + 2 * n);
    

    int v1 = accumulate(arr, arr + n, 0);
    int v2 = accumulate(arr + n, arr + 2 * n, 0);

    if ( v1 == v2 ) cout << -1 << endl;
    else for (int i = 0; i < 2 * n; ++i)
        printf("%d ", arr[i]);

    return 0;
}
