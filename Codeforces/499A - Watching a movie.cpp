#include <bits/stdc++.h>
using namespace std;


int st[100], ft[100];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> st[i] >> ft[i];

    int ct = 1, res = 0;
    for (int i = 1; i <= n; ++i) {
        int nxst = st[i], nxft = ft[i];
        int sbp = (nxst - ct) / k;
        int lft = (nxst - ct) % k;
        res += lft + (ft[i] - st[i] + 1);
        ct = ft[i] + 1;
    }

    cout << res << endl;
    return 0;
}
