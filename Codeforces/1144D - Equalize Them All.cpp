#include <bits/stdc++.h>
using namespace std;

int arr[200200], freq[200200];

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n;
    cin >> n;

    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        freq[arr[i]]++;
        mx = max(mx, arr[i]);
    }

    int target = -1, mx_freq = 1;
    for (int i = 0; i <= mx; ++i) {
        if (freq[i] > mx_freq) {
            target = i;
            mx_freq = freq[i];
        }
    }

    int pos;
    // if all numbers appears exactly one times
    if (target == -1) target = arr[1];
    for (int i = 1; i <= n; ++i) if (target == arr[i]) {pos = i; break;}


    vector<pair<int, pair<int, int>>> res;
    int k = pos;
    while( k - 1 > 0 ) {
        if (arr[k - 1] == arr[k]) {
            k--;
            continue;
        }

        else if ( arr[k - 1] < arr[k] ) res.push_back({1, {k - 1, k}});
        else res.push_back({2, {k - 1, k}});


        arr[k - 1] = arr[k];
        k--;
    }

    k = pos;
    while( k + 1 <= n ) {
        if (arr[k + 1] == arr[k]) {
            k++;
            continue;
        }

        else if ( arr[k + 1] > arr[k] ) res.push_back({2, {k + 1, k}});
        else res.push_back({1, {k + 1, k}});

        arr[k + 1] = arr[k];
        k++;
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el.first << ' ' << el.second.first << ' ' << el.second.second << endl;
    return 0;
}
