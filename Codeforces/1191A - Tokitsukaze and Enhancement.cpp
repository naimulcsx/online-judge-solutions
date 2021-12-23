#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n;
    cin >> n;

    int m = n % 4;

    if ( m == 1 ) cout << 0 << ' ' << 'A' << endl;
    else if ( m == 2 ) cout << 1 << ' ' << 'B' << endl;
    else if ( m == 3 ) cout << 2 << ' ' << 'A' << endl;
    else cout << 1 << ' ' << 'A' << endl;
    
    return 0;   
}
