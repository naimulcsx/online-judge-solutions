#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, v;
    cin >> n >> v;

    int fuel_needed = n - 1;
    if ( fuel_needed <= v ) cout << fuel_needed << endl;
    else {
        int i = 0, price = 0;
        while ( fuel_needed != 0 ) {
            i++;
            if ( i == 1 ) {
                price += i * v;
                fuel_needed -= v;
            } else  {
                price += i;
                fuel_needed--;
            }
        }
        cout << price << endl;
    }
    return 0;
}
