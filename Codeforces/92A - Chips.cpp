#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int i = 1;
    while( true ) {
        if (i == n + 1) i = 1;
        if (k >= i) k -= i;
        else {
            cout << k << endl;
            return 0;
        }
        i++;
    }

    return 0;
}
