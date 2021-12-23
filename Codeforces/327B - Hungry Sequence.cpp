#include <bits/stdc++.h>
using namespace std;
// 156,454,195,642

int marks[1300001];
vector<int> sieve(int n) {
    
    // initialize
    for (int i = 0; i <= n; ++i) marks[i] = 1;
    marks[0] = 0;
    marks[1] = 0;
    for (int i = 2; i * i <= n; ++i) {
        if ( marks[i] ) {
            for (int j = i * i; j <= n; j += i)
                marks[j] = false;
        }
    }
    
    vector<int> res;
    for (int i = 0; i <= n; ++i)
        if (marks[i]) res.push_back(i);

    return res;
}

int main() {
    vector<int> primes = sieve(1300000);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
        cout << primes[i] << " ";
    cout << endl;
    return 0;
}
