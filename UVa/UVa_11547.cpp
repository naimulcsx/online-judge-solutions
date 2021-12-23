#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;

        x = ( ( ( ( ( ( ( x * 567 ) / 9 ) + 7492 ) * 235 ) / 47 ) - 498 ) / 10 ) % 10;

        cout << abs(x) << endl;
    }
}