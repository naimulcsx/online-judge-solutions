#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];


    int i = 0, max = 0;
    while(i - 1 < n) {
        int j = i, k = i + 1, count = 1;
        while(k < n && arr[k] > arr[j]) count++, k++, j++;
        if (max < count) max = count;
        i = k;
    }

    cout << max << endl;  
    return 0;
}
