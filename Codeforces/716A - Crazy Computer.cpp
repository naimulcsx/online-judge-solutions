#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    #endif

    int n, c;
    cin >> n >> c;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i + 1] - arr[i] > c)
            count = 1;
        else
            count++;
    }

    cout << count << endl;
    return 0;
}
