#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int arr[100100];

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    if ( n <= 2 ) {
        cout << 0 << endl;
        return 0;
    }

    int chng[] = {-1, 0, 1};
    vector<pair<int, int>> diff;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            diff.push_back({ chng[i] + arr[1], chng[j] + arr[2]});
        }
    }

    int res = 2e9;
    for (auto el: diff) {
        int k = el.second - el.first;
        int prev = el.second, cnt = 0;

        if ( el.first != arr[1] ) cnt++;
        if ( el.second != arr[2] ) cnt++;

        bool finished = true;
        for (int i = 3; i <= n; ++i) {
            int abdif = arr[i] - prev;

            if ( abdif == k ) {
                prev = arr[i];
                continue;
            }

            else if ( (k > 0 && abdif == k - 1) || (k <= 0 && abdif == k + 1) ) {
                if (k > 0) prev = arr[i] + 1;
                else prev = arr[i] - 1;
                cnt++;
            }

            else if ( (k > 0 && abdif == k + 1) || (k <= 0 && abdif == k - 1) ) {
                if (k > 0) prev = arr[i] - 1;
                else prev = arr[i] + 1;
                cnt++;
            }

            else {
                finished = false;
                break;
            }
        }

        if (finished) {
            res = min(res, cnt);
        }
    }

    if (res == 2e9) cout << -1 << endl;
    else cout << res << endl;
    return 0;
}
