#include <iostream>
using namespace std;
using ulli = unsigned long long int;
bool is_coprime( int , int , int );

int main() {
    ulli l, r;
    cin >> l >> r;
    bool found = false;

    if ( l - r >= 2 ) {
        for (ulli i = l; i <= r - 2; ++i) {
            if ( !is_coprime( i, i + 1, i + 2 ) ) {
                found = true;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
        if (!found)  cout << -1 << endl;
    }

    else cout << -1 << endl;
    return 0;
}

bool is_coprime( int a, int b, int c ) {
    if ( (a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && c % 2 == 0) )
        return false;
    return true;
}
