#include <iostream>
using namespace std;
using ulli = unsigned long long int;

int bigmod(ulli n, ulli p, ulli m) {
    if ( p == 0 ) return 1;
    if ( p % 2 == 0 ) {
        int p1 = bigmod ( n , p / 2 , m );
        return ( p1 * p1 ) % m ;
    }
    else return ( (n % m) * (bigmod( n, p - 1, m ) % m) ) % m;
}

int main() {
    ios::sync_with_stdio(false);
    ulli b, p, m;
    while ( cin >> b >> p >> m ) 
        cout << bigmod(b, p, m) << endl;
    return 0;
}
