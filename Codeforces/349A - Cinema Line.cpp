#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int f = 0, tf = 0;
    for (auto el: arr) {
        if (el == 25) tf++;
        else if (el == 50) {
            if (tf == 0) {
                cout << "NO" << endl;
                return 0;
            } else tf--, f++;
        } else if (el == 100) {
            if( tf >= 1 && f >= 1 ) tf--, f--;
            else if ( tf >= 3 ) tf-= 3;
            else {
                cout <<"NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
