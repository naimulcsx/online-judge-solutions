#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int k, cnt = 0;
    cin >> k;

    int i = 1;
    while( cnt < k ) {
        
        // calculate sum of the number
        int sum = [&](int n) -> int {
            int sum = 0;
            while( n / 10 ) {
                sum += n % 10;
                n /= 10;
            }
            return sum + n;
        }( i );
        
        if ( sum == 10 ) cnt++;
        i += 9;
    }

    cout << i - 9 << endl;
    return 0;
}
