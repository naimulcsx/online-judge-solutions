#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n;
int arr[200200];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    int mx = 0, mx_pos;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (mx < arr[i]) {
            mx = arr[i];
            mx_pos = i;
        }
    }

    vector<int> seg1, seg2;
    for (int i = 0; i <= mx_pos; ++i) seg1.push_back(arr[i]);
    for (int i = mx_pos; i < n; ++i) seg2.push_back(arr[i]);
    reverse(begin(seg2), end(seg2));

    if ( is_sorted(begin(seg1), end(seg1)) && is_sorted(begin(seg2), end(seg2)) ) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}
