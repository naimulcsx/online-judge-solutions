#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int b, g;
    cin >> b >> g;

    if (b == g) {
        for (int i = 0; i < b; ++i) cout << "BG";
        cout << endl;
    } else {
        if (max(b, g) == b) {
            for (int i = 0; i < 2 * g + 1; ++i) {
                if (i % 2 == 0) cout << "B";
                else cout << "G";
            }
            for (int i = 0; i < b - g - 1; ++i) cout << "B";
        } else {
            for (int i = 0; i < 2 * b + 1; ++i) {
                if (i % 2 == 0) cout << "G";
                else cout << "B";
            }
            for (int i = 0; i < g - b - 1; ++i) cout << "G";
        }
        cout << endl;
    }
    return 0;   
}
