#include <bits/stdc++.h>
using namespace std;

int arr[100100];

int main() {    
    int n;
    scanf("%d", &n);

    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if ( arr[i] & 1 ) odd++;
        else even++;
    }

    if ( odd == n || even == n ) {
        for (int i = 0; i < n; ++i) 
            printf("%d ", arr[i]);
    } else {
        sort( arr, arr + n );
        for (int i = 0; i < n; ++i)
            printf("%d ", arr[i]);
    }

    return 0;
}
