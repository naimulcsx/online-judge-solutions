#include <iostream>
using namespace std;

typedef long long lli;

int main(void) {
    lli n, k, middle; 
    cin >> n >> k;

    if (n % 2 == 0)
        middle = n / 2;
    else 
        middle = n / 2 + 1;

    if (k <= middle)
        cout << k * 2 - 1 << endl;
    else 
        cout << (k - middle) * 2 << endl;

    return 0;
}
