#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int n, mx = 0;
    cin >> n;
    vector<int> arr(n);

    unordered_map<int, int> freq;
    for(auto &el: arr) {
        cin >> el;
        freq[el]++;
        mx = max(mx, freq[el]);
    }

    int cnt = 0, temp = 0;
    while( mx >= 2 ) {
        int new_mx = 0;
        for (auto it = begin(freq); it != end(freq); ++it) {
            if (it->second >= 2) {
                it->second -= 2;
                temp += 2;
            }

            if ( temp == 4 ) {
                temp = 0;
                cnt++;
            }
            new_mx = max(new_mx, it->second );
        }
        mx = new_mx;
    }

    cout << cnt << endl;
    return 0;
}
