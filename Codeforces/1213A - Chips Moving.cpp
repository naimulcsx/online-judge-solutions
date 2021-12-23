#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if (k % 2 == 0) even++;
        else odd++;
    }

    if (even > odd) cout << odd << endl;
    else cout << even << endl;
    return 0;
}
