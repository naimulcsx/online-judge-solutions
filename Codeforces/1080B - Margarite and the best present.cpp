#include <iostream>
using namespace std;
int sum(int);

int main() {
    int t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << sum(b) - sum(a - 1) << endl;
    }
    return 0;
}

int sum(int a) {
    int res;
    if (a % 2 == 1) {
        res = (a + 1) / 2;
        res *= -1;
    } else res = a / 2;
    return res;
}
