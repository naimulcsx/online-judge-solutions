#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int t, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        sum += t;
    }

    t = n;
    int curr = round( (double) sum / n );
    while( curr != k ) {
        curr = round( ((double) sum + k) / (t + 1) );
        sum += k;
        t++;
    }
    cout << t - n << endl;
    return 0;
}
