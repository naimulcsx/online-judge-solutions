#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &el: vec) cin >> el;

    int even = 0, odd = 0;
    vector<int> odd_prefix, even_prefix;
    for (int i = 0; i < n; ++i) {
        if ( (i + 1) % 2 == 0 ) {
            odd_prefix.push_back(odd);
            even_prefix.push_back(vec[i] + even);
            even += vec[i];
        } else {
            even_prefix.push_back(even);
            odd_prefix.push_back(vec[i] + odd);
            odd += vec[i];
        }
    }

    // for (auto el: even_prefix) cout << el << ' ';
    // cout << endl;

    // for (auto el: odd_prefix) cout << el << ' ';
    // cout << endl;

    int c = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;

        if ( (i + 1) % 2 == 0 ) {
            x = even_prefix[n - 1] - even_prefix[i];
            y = odd_prefix[n - 1] - odd_prefix[i];
        } else {
            y = even_prefix[n - 1] - even_prefix[i];
            x = odd_prefix[n - 1] - odd_prefix[i];
        }     

        int p = 0, q = 0, odd_sum, even_sum;

        if ( i > 0 ) {
            p = even_prefix[i - 1];
            q = odd_prefix[i - 1];
        }

        if ((i + 1) % 2 == 1) {
            even_sum = p + x;
            odd_sum = q + y;
        } else {
            even_sum = p + y;
            odd_sum = q + x;
        }

        if ( odd_sum ==  even_sum ) c++;
    }
    cout << c << endl;
    return 0;
}
