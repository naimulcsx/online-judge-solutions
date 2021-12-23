#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int sum = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = m + sum;
    double avg = (double) total / n;

    for (int i = 0; i < n; ++i) {
        if ( arr[i] > avg ) {
            cout << -1 << endl;
            return 0;
        }
    } 

    cout << fixed << setprecision(6);
    for (auto el: arr) cout << avg - el << endl;
    return 0;
}
