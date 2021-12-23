#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int a, b, cnt = 0;
        cin >> a >> b;

        while(a > 0 && b > 0) {
            int m = b % a;
            cnt += b / a;
            b = a;
            a = m;
        }

        cout << cnt << endl;
    }
    
    return 0;
}
