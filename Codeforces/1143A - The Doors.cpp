#include<bits/stdc++.h>
using namespace std;

int cnt[2];
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el, cnt[el]++;

    for (int i = 0; i < n; ++i) {
        cnt[arr[i]]--;
        if (cnt[arr[i]] == 0) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
