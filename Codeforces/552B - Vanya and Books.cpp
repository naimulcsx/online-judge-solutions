#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    ll n, count = 0;
    cin >> n;
    
    ll arr[] = {9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000};
    if (n == 1000000000) count += 10;

    for (int i = 0; i <= 8; ++i) {
       if ( n >= arr[i] ) {
           count += arr[i] * (i + 1);
           n -= arr[i];
       } else {
           count += n * (i + 1);
           n = 0;
       }
    }

    cout << count << endl;
    return 0;
}
