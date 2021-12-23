#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        if (m % 2 == 1) cout << m << " ";
        else cout << m - 1 << " ";
    }
    cout << endl;
    return 0;
}
