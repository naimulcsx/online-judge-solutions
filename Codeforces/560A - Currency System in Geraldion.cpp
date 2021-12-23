#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        if (k == 1) {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << "1" << endl;
    return 0;
}
