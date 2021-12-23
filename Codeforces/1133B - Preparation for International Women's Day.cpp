#include <bits/stdc++.h>
using namespace std;

int marks[101];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int inp; cin >> inp;
        marks[inp % k]++;
    }

    int ans = (marks[0] / 2) * 2;
    for (int i = 1; i < k; ++i) {
        if ( marks[i] > 0 && marks[k - i] > 0 && i != k - i ) {
            int t = min(marks[i], marks[k - i]);
            ans += 2 * t;
            marks[i] -= 2 * t, marks[k - i] -= 2 * t;
        } else if ( i == k - i ) {
            ans += (marks[i] / 2) * 2;
            marks[i] = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
