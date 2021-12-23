#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, from, to;
    cin >> n;

    int arr[n - 1];
    for (int i = 0; i < n - 1; ++i)
        cin >> arr[i];


    cin >> from >> to;
    int count = 0;
    for (int i = to - 2; i >= from - 1; --i)
        count += arr[i];

    cout << count << endl;
    return 0;
}
