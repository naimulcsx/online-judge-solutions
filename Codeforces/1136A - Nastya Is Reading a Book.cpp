#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        vec.push_back(p);
    }

    int pages_read, i;
    cin >> pages_read;
    for ( i = 0; i < n; ++i ) {
        if ( pages_read >= vec[i].first && pages_read <= vec[i].second ) break;
    }

    cout << n - i << endl;
    return 0;
}
