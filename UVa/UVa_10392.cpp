#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// func prototypes
void sieve(ll n);
void print_prime_factors(ll n);

// global vars
bitset<10000000> marks;
vector<int> primes;


int main() {
    sieve(10000000);
    ll n;

    while(cin >> n) {
        if (n == -1) break;
        print_prime_factors(n);
        cout << endl;
    }
    return 0;
}

void sieve(ll n) {
    marks.set();

    for (ll i = 2; i * i <= n; i++)
        if (marks[i])
            for (ll j = i * i; j <= n; j+=i)
                marks[j] = false;
    
    for (int i = 2; i <= (int) n; i++)
        if (marks[i])
            primes.push_back(i);
}

void print_prime_factors(ll n) {
    ll i = 0, current_prime;

    while( i < (ll) primes.size() && primes.at(i) * primes.at(i) <= n) {
        current_prime = primes.at(i);
        if (n % current_prime == 0) {
             while( n % current_prime == 0 ) {
                n /= current_prime;
                cout << "    " << current_prime << endl;
            }
        }
        i++;
    }

    if (n != 1) 
        cout << "    " << n << endl;
}
