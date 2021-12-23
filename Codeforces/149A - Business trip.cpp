#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int k;
    cin >> k;
    vector<int> arr(12);
    for (auto &el: arr) cin >> el;
    sort(arr.rbegin(), arr.rend());

    int i = 0, sum = 0;
    while(sum < k && i < 12) {
        sum += arr[i];
        ++i;
    }   

    if (sum < k) cout << -1 << endl;
    else cout << i << endl;
    return 0;   
}
