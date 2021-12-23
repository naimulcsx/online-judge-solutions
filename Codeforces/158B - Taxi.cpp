#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    int n, input, count[5] = {0}, total = 0, minimum;
    
    cin >> n;
    while(n-- && cin >> input) count[input]++;

    // 4 with 4
    total += count[4], count[4] = 0;

    // 3 with 1
    minimum = min(count[3], count[1]);
    total += minimum;
    count[3] -= minimum;
    count[1] -= minimum;

    // 3 with 3
    total += count[3], count[3] = 0;

    // convert 1's into 2's
    count[2] += (count[1] > 1) ? count[1] / 2 : 0;
    count[1] = count[1] % 2;

    // 2 with 2
    total += (count[2] > 1) ? count[2] / 2 : 0;
    count[2] = count[2] % 2;
    
    // 2 with one
    if (count[2] > 0 || count[1] > 0) total++, count[1] = 0, count[2] = 0;

    cout << total << endl;
    return 0;
}
