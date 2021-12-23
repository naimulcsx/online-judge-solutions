#include <iostream>
#include <map>
using namespace std;
using ulli = unsigned long long int;

ulli nc2(int n) {
    ulli res = 1, t = n;
    if (n % 2 == 0)  res *= n / 2, res *= (n- 1);
    else  res *= n, res *= (n - 1) / 2;
    return res;
}

int main() {
    ios::sync_with_stdio(false);

    int n, k, input;
    cin >> n >> k;

    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if ( !freq.count( input ) )
            freq.insert( {input, 1} );
        else 
            freq[input]++;
    }

    ulli res = nc2(n);
    for (auto it = freq.begin(); it != freq.end(); it++)
        res -= nc2(it->second);

    cout << res << endl;
    return 0;
}
