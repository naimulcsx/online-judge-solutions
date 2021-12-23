#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> primes;

void gen_primes(int n) {
    vector<bool> marks(n + 1, true);
    for (int i = 2; i * i <= n; ++i) {
        if ( marks[i] ) {
            for (int j = i * i; j <= n; j += i) {
                marks[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) 
        if (marks[i]) primes.push_back(i);
}

void sol() {
    int m = n;
    vector<int> res;
    for (int i = 0; primes[i] * primes[i] <= n; ++i) {
        if ( n % primes[i] == 0 ) {
            while(n % primes[i] == 0) {
                n /= primes[i];
                res.push_back(primes[i]);
            }
        }
    }
    if (n > 1) res.push_back(n);
    if ( (int) res.size() < k ) cout << "-1" << endl;
    else {
        int t = 1;
        for (int i = 0; i < k - 1; ++i) cout << res[i] << ' ', t *= res[i];
        cout << m / t << endl;
    }
}

int main() {
    gen_primes(1e3);
    cin >> n >> k;
    sol();
    return 0;
}
