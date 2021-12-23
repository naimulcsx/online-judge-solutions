#include<bits/stdc++.h>
using namespace std;

int arr[110];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    int i = 0, cnt = 0;
    while( i < n ) {
        int j = i + 1, curr = arr[i];
        while( j < n && curr + arr[j] <= m ) curr += arr[j], j++;
        cnt++;
        i = j;
    }

    printf("%d\n", cnt);
    return 0;
}