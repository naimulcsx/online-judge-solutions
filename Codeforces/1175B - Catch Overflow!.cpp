#include <bits/stdc++.h>
using ll = long long;
const ll MAX = 4294967295;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;

    vector<int> s;
    bool flag = false;
    ll l = 1, k = 0, res = 0;

    while(q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "for") {
            int t;
            cin >> t;
            if ( flag ) { k ++; continue; }
            l *= t;
            if ( l > MAX ) l /= t, flag = true, k++;
            else s.push_back(t);
        } 

        else if (cmd == "add") {
            res += l;
            if ( res > MAX || flag ) 
                { cout << "OVERFLOW!!!" << endl; return 0; }
        }

        else if ( cmd == "end" ) {
            if (k > 0) {
                k--;
                if (k == 0) flag = false;
            } else {
                int lst = s[s.size() - 1];
                s.pop_back();
                l /= lst;
            }
        }

    }

    if ( res > MAX || flag ) cout << "OVERFLOW!!!" << endl;
    else cout << res << endl;
    return 0;
}
