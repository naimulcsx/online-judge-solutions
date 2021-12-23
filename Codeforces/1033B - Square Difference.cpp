#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bitset<500000> marks;
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
    for(int i = 3; i <= n; i += 2) 
        if (!marks[i]) primes.push_back(i);
}

bool is_prime(ll n) {
    for (int i = 0; primes[i] * (ll) primes[i] <= n; ++i) {
        if (n % primes[i] == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    gen_prime(448300);

    int q;
    cin >> q;
    while( q-- ) {
        ll a, b;
        cin >> a >> b;
        if ( a - b == 1 && is_prime(a + b) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
