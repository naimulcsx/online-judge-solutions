#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    ios::sync_with_stdio(false);

    ll fish, rabbit, chicken;
    cin >> fish >> rabbit >> chicken;

    vector<string> days {"sat", "sun", "mon", "tue", "wed", "thu", "fri"};

    ll fish_need = 0, rabbit_need = 0, chicken_need = 0;
    for (auto el: days) {
        if ( el =="sun" || el == "mon" || el == "thu" ) fish_need++;
        else if ( el == "tue" || el == "sat") rabbit_need++;
        else chicken_need++;
    }

    if ( fish < fish_need || rabbit < rabbit_need || chicken < chicken_need ) {
        vector<string> days {"sat", "sun", "mon", "tue", "wed", "thu", "fri"};
        ll a = fish, b = rabbit, c = chicken;

        ll mx = 0;
        for (int i = 0; i < 7; ++i) {
            rotate(days.begin(), days.begin() + 1, end(days));


            ll cnt = 0;
            for (auto el: days) {
                if ( el =="sun" || el == "mon" || el == "thu" ) {
                        if (a == 0) break;
                        a--;
                }
                else if ( el == "tue" || el == "sat") {
                        if (b == 0) break;
                        b--;
                }
                else {
                        if (c == 0) break;
                        c--;
                }
                cnt++;
            }
            a = fish, b = rabbit, c = chicken;
            mx = max(cnt, mx);
        }

        cout << mx << endl;
    } else {

        ll lo = 0, hi = 1e9, total_week = 1;
        while( lo <= hi ) {
            ll mid = (hi + lo) / 2;
            if ( fish_need * mid <= fish && rabbit_need * mid <= rabbit && chicken_need * mid <= chicken ) {
                total_week = max(total_week, mid);
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        fish -= total_week * fish_need;
        rabbit -= total_week * rabbit_need;
        chicken -= total_week * chicken_need;

        vector<string> days {"sat", "sun", "mon", "tue", "wed", "thu", "fri"};
        ll a = fish, b = rabbit, c = chicken;

        ll mx = 0;
        for (int i = 0; i < 7; ++i) {
            rotate(days.begin(), days.begin() + 1, end(days));
            ll cnt = 0;
            for (auto el: days) {
                if ( el =="sun" || el == "mon" || el == "thu" ) {
                        if (a == 0) break;
                        a--;
                }
                else if ( el == "tue" || el == "sat") {
                        if (b == 0) break;
                        b--;
                }
                else {
                        if (c == 0) break;
                        c--;
                }
                cnt++;
            }
            a = fish, b = rabbit, c = chicken;
            mx = max(cnt, mx);
        }

        cout << mx + total_week * 7  << endl;
    }

    return 0;
}
