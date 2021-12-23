#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, c = 1;
    cin >> t;
    while(t--) {
        int n, max = 0;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (auto it: arr)
            if (it > max)
                max = it;
        cout << "Case " << c << ": ";
        cout << max << endl;
        c++;
    }
    return 0;
}