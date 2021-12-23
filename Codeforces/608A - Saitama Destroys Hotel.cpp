#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, s;
    cin >> n >> s;

    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; ++i) cin >> data[i].first >> data[i].second;
    sort(rbegin(data), rend(data));

    int curr = s, time_passed = 0;
    for (int i = 0; i < n; ++i) {
        if ( data[i].first > s ) continue;

        time_passed += (curr - data[i].first);

        if (data[i].second - time_passed > 0)
            time_passed += (data[i].second - time_passed);

        curr = data[i].first;
    }


    time_passed += data[n - 1].first;
    cout << time_passed << endl;
    return 0;
}
