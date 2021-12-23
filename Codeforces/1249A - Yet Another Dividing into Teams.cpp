#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int arr[110];

int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> arr[i];
        sort(arr + 1, arr + n + 1);

        bool flag = false;
        for (int i = 1; i < n; ++i) {
            if (arr[i + 1] - arr[i] == 1) {
                flag = true;
                break;
            }
        }

        if (flag) cout << "2" << endl;
        else cout << "1" << endl;
    }

    return 0;
}
