#include <bits/stdc++.h>
using namespace std;

int freq[200200];

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n, k;
    cin >> n;

    int mx = 0;
    vector<int> inc, dec;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        freq[k]++;
        mx = max(mx, k);
    }

    // check if possible
    for (int i = 0; i <= mx; ++i) {
        if (freq[i] > 2) {
            cout<< "NO" << endl;
            return 0;
        }
    }

    // if possible construct the ans
    for (int i = 0; i <= mx; ++i) {
        if (freq[i] == 2) {
            inc.push_back(i);
            dec.push_back(i);
        }

        else if ( freq[i] == 1 ) {
            inc.push_back(i);
        }
    }

    sort(inc.begin(), inc.end());
    sort(dec.rbegin(), dec.rend());

    cout << "YES" << endl;
    cout << inc.size() << endl;
    for (auto el: inc) cout << el << ' ';
    cout << endl;

    cout << dec.size() << endl;
    for (auto el: dec) cout << el << ' ';
    cout << endl;

    return 0;
}
