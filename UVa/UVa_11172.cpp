#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long p, q;
        cin >> p >> q;

        if (p > q) cout << ">" << endl;
        else if (p < q) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;
}