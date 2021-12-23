#include <bits/stdc++.h>
using namespace std;

bool can( int one, int zero ) {
    return zero >= (one / 2) - 1 && (zero <= one + 1);
}

int main() {
    int zero, one;
    cin >> zero >> one;

    bool flag = true;
    string res = "";
    int n = zero + one, one_cnt = 0, zero_cnt = 0;

    for ( int i = 0; i < n; ++i ) {
        if ( one > 0 && one_cnt < 2 && can( one - 1, zero ) ) {
            res += '1';
            one--;
            one_cnt++;
            zero_cnt = 0;
        }

        else if ( zero > 0 && zero_cnt < 1 && can(one, zero - 1) )  {
            res += '0';
            zero--;
            one_cnt = 0;
            zero_cnt++;
        }

        else flag = false;
    }

    if ( flag ) cout << res << endl;
    else cout << -1 << endl;

    return 0;
}

