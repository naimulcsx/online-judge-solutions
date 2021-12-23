#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ulli n;
    cin >> n;

    if ( n % 2 == 0 )
        cout << n / 2 << endl;
    else 
        cout << "-" << (n + 1) / 2 << endl; 
    
    return 0;
}
