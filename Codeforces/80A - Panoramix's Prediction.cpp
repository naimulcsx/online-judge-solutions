#include <bits/stdc++.h>
using namespace std;

vector<int> *seive(int);

int main(void) {
    int n, m, len;
    cin >> n >> m;
    vector<int> *primes = seive(m);
    len = primes->size();

    if (primes->at(len - 1) == m && primes->at(len - 2) == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

vector<int> *seive(int n) {
    bool is_prime[n + 1];
    memset(is_prime, true, n + 1);

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    vector<int> *primes = new vector<int>();
    for (int i = 2; i <= n; i++)
        if (is_prime[i])
            primes->push_back(i);

    return primes;
}
