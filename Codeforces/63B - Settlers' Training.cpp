#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &el: vec) cin >> el;

    int res = 0, c = 0;

    vector<bool> completed(n + 1, false);

    while( true ) {
        unordered_map<int, bool> marks;

        for (int i = 0; i < n; ++i) {
            int el = vec[i];

            if ( el < k ) {
                if ( marks[ el ] == false ) {
                    vec[i]++;
                    marks[ el ] = true;
                }
            } else if ( el == k ) {
                if ( !completed[i] ) c++;
                completed[i] = true;
            }
        }

        if ( c == n ) break;
        res++;
    }
    
    cout << res << endl;
    return 0;
}
