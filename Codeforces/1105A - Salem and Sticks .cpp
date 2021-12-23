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
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int cost = 9999999, t;
    for (int i = 1; i <= 100; ++i) {
        int k = i, temp = 0, old = cost;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > k + 1) temp += arr[i] - (k + 1);
            else if (arr[i] < k - 1) temp += k - 1 - arr[i];
        }
        cost = min(cost, temp);
        if (old != cost) t = k;
    }

    cout << t << " " << cost << endl;
    return 0;
}
