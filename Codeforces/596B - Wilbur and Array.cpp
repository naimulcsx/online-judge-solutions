#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(void) {
    int n;
    cin >> n;
    
    int target[n];
    for (int i = 0; i < n; ++i)
        cin >> target[i];

    ll current = 0, count = 0, diff;

    for ( int i = 0; i < n; ++i ) {
        diff = abs( current - target[i] );

        if (current < target[i]) current += diff;
        else current -= diff;
        
        count += diff;
    }
    
    cout << count << endl;
    return 0;
}
