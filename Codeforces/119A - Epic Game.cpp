#include <iostream>
using namespace std;

int gcd(int, int);

int main() {
    ios::sync_with_stdio(false);

    int a, b, n;
    cin >> a >> b >> n;

    int turn = 1, temp;
    while(1) {
        // when the turn is Simon's
        if ( turn % 2 == 1 )  temp = gcd(a, n);

        // if the turn is Antisimon's
        else  temp = gcd(b, n);
        
        // reduce n by temp
        n -= temp;

        // when n is negetive, 
        // there were no sufficient stones left to take
        if ( n < 0 ) {
            if ( turn % 2 == 1 ) cout << 1 << endl;
            else cout << 0 << endl;
            break;
        }

        turn++;
    }

    return 0;
}

int gcd(int a, int b) {
    if ( b % a == 0 ) return a;
    else return gcd(b, a % b);
}
