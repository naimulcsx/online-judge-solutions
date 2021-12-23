#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    vector<int> first, second;
    for (int i = 0; i < n; ++i) {
        if (i & 1) second.push_back(arr[i]);
        else first.push_back(arr[i]);
    }


    int l = len(second);
    for (auto el: first) cout << el << ' ';
    for (int i = l - 1; i >= 0; --i) cout << second[i] << ' ';
    cout << endl;
    
    return 0;
}
