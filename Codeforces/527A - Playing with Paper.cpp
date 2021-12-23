#include <iostream>
using namespace std;
using ll = long long;

int main(void) {
    ll a, b, count = 0, temp;
    cin >> a >> b;

    while( b != 0 ) {
        temp = a;
        count += a / b;
        a = b;
        b = temp % b;
    }

    cout << count << endl;
    return 0;
}
