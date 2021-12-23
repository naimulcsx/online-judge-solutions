#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, m;
string str;

string gen(int len, string sub) {
    string res;
    for (int i = 0; i < len; ++i)
        res += sub[i % 3];
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    while(q--) {
        cin >> n >> m >> str;
        string a = gen(m, "RGB");
        string b = gen(m, "GBR");
        string c = gen(m, "BRG");

        int res = INT_MAX;
        for (int i = 0; i <= n - m; ++i) {
            int st = i, cnt1 = 0, cnt2 = 0, cnt3 = 0;

            for (int j = st, k = 0; k < m; ++j, ++k) 
                if (str[j] != a[k]) cnt1++;
            

            for (int j = st, k = 0; k < m; ++j, ++k) {
                if (str[j] != b[k]) cnt2++;
            }


            for (int j = st, k = 0; k < m; ++j, ++k) {
                if (str[j] != c[k]) cnt3++;
            }

            res = min(res, min(cnt1, min(cnt2, cnt3)));
        }

        cout << res << endl;
    }

    return 0;
}
