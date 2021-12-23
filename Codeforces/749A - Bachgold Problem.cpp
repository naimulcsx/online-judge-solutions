#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    bool is_odd = (n % 2 == 1) ? true : false;

    if (is_odd) n -= 3, count++;
    count += n / 2;

    cout << count << endl;
    for (int i = 0; i < n / 2; ++i)
        cout << 2 << " ";
    if (is_odd) cout << 3;
    cout << endl;
    return 0;
}
