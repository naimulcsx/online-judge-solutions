#include <iostream>
using namespace std;

int main() {
    int n, k, r, g, b, count = 0;
    cin >> n >> k;

    r = n * 2, g = n * 5, b = n * 8;

    count += (r / k) + ((r % k != 0) ? 1 : 0);
    count += (g / k) + ((g % k != 0) ? 1 : 0);
    count += (b / k) + ((b % k != 0) ? 1 : 0);
    cout << count << endl;

    return 0;
}
