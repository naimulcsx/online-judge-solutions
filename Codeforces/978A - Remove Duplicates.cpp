#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n;
int arr[100];
bool marks[1100];

int main() {

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    vector<int> res;
    for (int i = n; i >= 1; --i) {
        if ( !marks[arr[i]] ) {
            res.push_back(arr[i]);
            marks[arr[i]] = 1;
        }
    }

    cout << res.size() << endl;
    reverse(res.begin(), res.end());
    for (auto el: res) cout << el << ' ';
    cout << endl;

    return 0;
} 