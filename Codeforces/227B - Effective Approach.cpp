#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);

    int n, m, input, storage[100020];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        storage[input] = i;
    }

    ll a = 0, b = 0;
    cin >> m;
    while(m--) {
        cin >> input;
        a += storage[input];
        b += n - storage[input] + 1;
    }

    cout << a << " " << b << endl;
    return 0;
}
