#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string p, q, res = "";
    cin >> p >> q;
    for ( int i = 0; i < p.length(); ++i ) {
        if ( p[i] == q[i] ) res += "0";
        else res += "1";
    }
    cout << res << endl;
    return 0;
}
