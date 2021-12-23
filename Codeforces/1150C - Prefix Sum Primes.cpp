#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
bitset<505000> marks;
void sieve(int n) {
    for (int i = 2; i * i <= n; ++i) {
        for (int j = i * i; j <= n; j += i) {
            if (!marks[j]) {
                marks[j] = true;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (!marks[i]) primes.push_back(i);
    }
}

pair<int, int> form( int val, int one, int two ) {
    int req_two, req_one;
    req_two = val / 2;
    req_one = val % 2;

    if ( req_two > two ) {
        int diff = req_two - two;
        req_two = two;
        req_one += 2 * diff;
    }

    return {req_one, req_two};
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int one = 0, two = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        if ( k == 1 ) one++;
        else two++;
    }

    sum += 2 * two + one;
    sieve(500000);
    vector<int> res;
    
    if (two) res.push_back(2), two--;
    else res.push_back(1), one--;

    int prev = res[0];

    while( one > 0 || two > 0 ) {
        auto it = upper_bound(begin(primes), end(primes), prev);
        int distance = *it - prev;
        
        pair<int, int> p = form(distance, one, two);

        for ( int i = 0; i < p.second; ++i ) {
            if (two == 0) break;
            res.push_back(2);
            two--;
        }

        for ( int i = 0; i < p.first; ++i ) {
            if (one == 0) break;
            res.push_back(1);
            one--;
        }

        prev = *it;
    }

    for (auto el: res) cout << el << ' ';
    cout << endl;
    return 0;
}
