#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool marks[1000010];
vector<int> primes;
void sieve(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if ( !marks[i] ) {
            for ( int j = 2 * i; j <= n; j += i ) {
                marks[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if ( !marks[i] ) primes.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    sieve(1e6);
    
    int q;
    cin >> q;
    while(q--) {
        ll n;
        cin >> n;

        ll midval;
        bool flag = false;
        int lo = 0, hi = primes.size() - 1, mid;
        
        while( lo <= hi ) {
            mid = (lo + hi) / 2;
            midval = primes[mid] * (ll) primes[mid];
            if ( midval == n ) flag = true, hi = mid - 1;
            else if ( midval < n ) lo = mid + 1;
            else hi = mid - 1;
        }   

        if ( flag ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
   
    return 0;
}
