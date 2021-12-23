#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    for (int i = 0; i <= 100; ++i) {
        for (int j = 0; j <= 100; ++j) {
            int x = b + a * i, y = d + c * j;
            if (x == y) {
                cout << b + a * i << endl;
                return 0;
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
}
