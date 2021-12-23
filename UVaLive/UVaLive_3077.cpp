#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    while(n--) {
        cin >> x >> y;
        if (y > x)
            cout << "NO BRAINS" << endl;
        else
            cout << "MMM BRAINS" << endl;
    }

    return 0;
}
