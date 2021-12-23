#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int n;
vector<int> arr;
ll max_beauty( vector<int> arr ) {
    int mx = 0;
    vector<int> segment[4];
    for (int i = 0; i < len(arr); ++i)
        segment[i % 4].push_back(arr[i]), mx = max(mx, arr[i]);

    ll i = 0, res = mx;
    for (auto el: segment) {
        if (el.size() != 1) res += max_beauty(el);
        else res += el[0];
        ++i;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    int v;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v;
        arr.push_back(v);
    }

    sort(begin(arr), end(arr));
    if (n == 1) cout << arr[0] << endl;
    else cout << max_beauty(arr) << endl;

    return 0;
}
