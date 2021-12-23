#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if ( abs(a - b) <= 1 ) 
        cout << a + b + c * 2 << endl;
    else
        cout << 2 * min(a, b) + 1 + c * 2 << endl;
        
    return 0;
}
