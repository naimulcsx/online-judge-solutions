#include <bits/stdc++.h>
using namespace std;

int arr[200200];
int l[200200], r[200200];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];

    l[0] = r[n - 1] = 1e9;

    if (arr[0] == 0) l[0] = 0;
    if (arr[n - 1] == 0) r[n - 1] = 0;
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] == 0) l[i] = 0;
        else l[i] = 1 + l[i - 1];
    }

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] == 0) r[i] = 0;
        else r[i] = 1 + r[i + 1];
    }

    for (int i = 0; i < n; ++i) cout << min(l[i], r[i]) << ' ';
    cout << endl;
    return 0;
}
