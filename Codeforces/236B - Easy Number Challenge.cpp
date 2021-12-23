#include <bits/stdc++.h>
using namespace std;

bool marks[1000100];
const int mod = 1073741824;
vector<pair<int, int>> pf[1000100];

void sieve( int n ) {
    for (int i = 2; i <= n; ++i) {
        if (marks[i]) continue;
        for (int j = i + i; j <= n; j += i) {
            marks[j] = 1;
            int k = j, cnt = 0;
            while(k % i == 0) k /= i, cnt++;
            pf[j].push_back({i, cnt});
        }
        pf[i].push_back({i, 1});
    }
}

int main() {
    sieve(1e6);
    int a, b, c;
    cin >> a >> b >> c;

    int res = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                int p = i * j * k, div_cnt = 1;
                vector<pair<int, int>> &pfactors = pf[p];
                for (auto el: pfactors) div_cnt = ((div_cnt % mod) * ((el.second + 1) % mod)) % mod;
                res += (div_cnt % mod);
            }
        }
    }
    
    cout << res % mod << endl;
    return 0;
}
