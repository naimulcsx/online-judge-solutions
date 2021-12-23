#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k, l, r, cost;
    cin >> n >> k;
    vector<int> vec( n, 1 );
    k = k - 1;

    // number of elemens on left or right of k
    l = k;
    r = n - k - 1;
    cost = 2;
    if ( k > 0 ) vec[k] = 0, vec[k - 1] = 2;
    else vec[k] = 0, vec[k + 1] = 2;

    if ( l <= r ) { 
        /* visit the left side first */
        for (int j = k - 1; j >= 0; --j) {
            vec[j + 1] += vec[j];
            cost += vec[j] + 2;
        }

        /* visit the right side */
        for ( int j = k + 1; j < n; ++j ) {
            vec[j - 1] += vec[j];
            if ( j == k + 1 ) cost +=  k + 1 + vec[j] + 1;
            else cost += vec[j] + 2;
        }
    } else {
        for (int j = k + 1; j < n; ++j) {
            vec[j - 1] += vec[j];
            cost += vec[j] + 2; // moving cost - 1, coin taking cost 1
        }

        for (int j = k - 1; j >= 0; --j) {
            vec[j + 1] = vec[j];
            if ( j == k - 1) cost += vec[j] + (n - k + 1);
            else cost += vec[j] + 2;
        }
    }

    cout << cost << endl;
    return 0;
}
