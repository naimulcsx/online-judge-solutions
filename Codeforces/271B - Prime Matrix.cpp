#include <bits/stdc++.h>
using namespace std;

bitset<102000> marks;
vector<int> primes;
void gen_prime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (!marks[i]) {
            for (int j = i * i; j <= n; j += i) {
                marks[j] = true;
            }
        }
    }

    if (n >= 2) primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (!marks[i]) primes.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    gen_prime(1e5 + 1e3);

    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r);

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            int k; cin >> k;
            mat[i].push_back(k);
        }
    }

    int res = numeric_limits<int>::max(); 
    for (int i = 0; i < r; ++i) {
        int cnt = 0;
        for (int j = 0; j < c; ++j) {
            auto it = lower_bound(begin(primes), end(primes), mat[i][j]);
            cnt += *it - mat[i][j];
        }
        res = min(res, cnt);
    }

    for (int i = 0; i < c; ++i) {
        int cnt = 0;
        for (int j = 0; j < r; ++j) {
            auto it = lower_bound(begin(primes), end(primes), mat[j][i]);
            cnt += *it - mat[j][i];
        }
        res = min(res, cnt);
    }

    cout << res << endl;
    return 0;
}
