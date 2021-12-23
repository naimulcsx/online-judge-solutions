#include <iostream>
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ulli x, y, count;
    cin >> x >> y;

    // There should be two multiples of 5 in each 10 interval for each value
    count = 0;
    count += 2 * x * (y / 10);
    
    int j = y % 10;

    for (int i = 1; i <= x; i++) {
        for (int k = 1; k <= j; k++) {
            if ( (i + k) % 5 == 0 )
                count++;
        }
    }

    cout << count << endl;
    return 0;
}
