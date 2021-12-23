#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, t, input;
    cin >> n >> t;

    int cell = 1; 
    bool flag = false;

    for ( int i = 1; i < n; ++i ) {
        cin >> input;
        if (cell == i) cell += input;
        if (cell == t) flag = true;
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
