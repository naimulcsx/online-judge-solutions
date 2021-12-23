#include <bits/stdc++.h>
using ll = long long;
using namespace std;

pair<int, int> arr[1010];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr + 1, arr + n + 1, [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });

    int cnt = 0, res = 0;
    for (int i = 1; i <= n; ++i) {
        res += (arr[i].first * cnt) + 1;
        cnt++;
    }
    cout << res << endl;
    for (int i = 1; i <= n; ++i) cout << arr[i].second << ' ';
    cout << endl;

    return 0;
}
