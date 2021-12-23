#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;
        int arr[n], mnarr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i], mnarr[i] = arr[i];

        reverse(mnarr, mnarr + n);
        for (int i = 1; i < n; ++i) 
            mnarr[i] = min(mnarr[i], mnarr[i - 1]);
        reverse(mnarr, mnarr + n);

        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > mnarr[i]) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
