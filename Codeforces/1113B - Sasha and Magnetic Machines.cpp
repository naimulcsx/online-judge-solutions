#include <bits/stdc++.h>
using namespace std;

template <typename T> ostream& operator << (ostream &os, const vector<T> &v) {
    auto f = v.begin(), e = v.end();
    for ( auto it = f; it != e; ++it ) cout << *it << ' ';
    return os;
}

vector<bool> marks(101);
void sieve(int n) {
    fill(marks.begin(), marks.end(), true);
    marks[0] = marks[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (marks[i]) {
            for (int j = i * i; j <= n; j += i) {
                marks[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sieve(100);
    sort( arr.begin(), arr.end() );

    int j = n - 1;
    int max = 0, opt_pos, div, prime_count = marks[arr[0]] ? 1 : 0;
    while( j != 0 ) {
        if ( marks[arr[j]] ) {
            j--;
            prime_count++;
            continue;
        }

        vector<int> divisors = [](int n) -> vector<int> {
            vector<int> res;
            for (int i = 1; i * i <= n; ++i) {
                if (i * i == n) {
                    res.push_back(i);
                } else if ( n % i == 0) {
                    res.push_back(i);
                    res.push_back(n/i);
                }
            }
            return res;
        }( arr[j] );


        for (auto el: divisors) {
            int org = arr[j] + arr[0];
            int res = arr[j] / el + arr[0] * el;

            if (org - res >= max) {
                max = org - res;
                opt_pos = j;
                div = el;
            }
        }
        j--;
    }
    
    if (prime_count != n) {
        arr[opt_pos] /= div;
        arr[0] *= div;
    }   
    
    cout << accumulate(arr.begin(), arr.end(), 0) << endl;
    return 0;
}
