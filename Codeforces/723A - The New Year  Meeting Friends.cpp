#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x, y, z;
    cin >> x >> y >> z;
    cout << max( x, max(y, z) ) - min( x, min(y, z) ) << endl;
    return 0;
}
