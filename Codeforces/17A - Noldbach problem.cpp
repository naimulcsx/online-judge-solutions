#include <bits/stdc++.h>
using namespace std;

bitset<1024> marks;
vector<int> primes;
void gen_primes(int n) {
    for (int i = 2; i * i <= n; ++i ) {
        if ( !marks[i] ) { 
            for (int j = i * i; j <= n; j += i) {
                marks[j] = true;
            }
        }
    }

    if (n >= 2) primes.push_back(2);
    for (int i = 3; i <= n; i += 2) if (!marks[i]) primes.push_back(i);
}

int main() {
    ios::sync_with_stdio(false);
    gen_primes(1e3 + 10);
    int n, k;
    cin >> n >> k;

    int l = primes.size(), cnt = 0;
    for ( int i = 0; i < l - 1; ++i ) {
        int p = primes[i] + primes[i + 1] + 1;
        if ( !marks[p] && p >= 2 && p <= n ) cnt++;
        else if ( p > n ) break;
    }

    if (cnt >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
