#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int fives = 0, zeros = 0;
    for (int i = 0; i < n; ++i) {
        int inp; cin >> inp;
        if (inp == 5) fives++;
        else zeros++;
    }

    if (zeros == 0 && fives < 9) cout << -1 << endl;
    else if (fives < 9 && zeros > 0) cout << 0 << endl;
    else if (zeros > 0) {
        for (int i = 0; i < fives / 9; ++i) cout << "555555555";
        for (int i = 0; i < zeros; ++i) cout << "0";
        cout << endl;
    } else cout << -1 << endl;

    return 0;   
}

