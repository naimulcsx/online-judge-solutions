#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bitset<100100> marks;
vector<int> primes;
void gen_primes(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (!marks[i]) {
            for (int j = i * i; j <= n; j += i) {
                marks[j] = 1;
            }
        } 
    }

    if (n >= 2) primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (!marks[i]) primes.push_back(i);
    }
}


ll smallest_pd(ll n) {
    for (int i = 0; i < (int) primes.size() && primes[i] * (ll) primes[i] <= n; ++i)
        if (n % primes[i] == 0) return primes[i];
    return n;
}

int main() {
    gen_primes(1e5);
    ll n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << endl;
    else cout << (n - smallest_pd(n)) / 2 + 1 << endl;
    return 0;
}
