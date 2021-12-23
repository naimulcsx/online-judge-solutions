#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;

    while(t--) {
        ll a, b, k, c = 0;
        cin >> a >> b >> k;

        if (k % 2 == 1)
            c += (k/2 + 1) * a,
            c -= (k - (k/2 + 1)) * b;
        else
            c += (k/2) * a,
            c -=  (k/2) * b;

        cout << c << endl;
    }
 
    return 0;
}
