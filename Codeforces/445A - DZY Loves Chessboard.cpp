#include <bits/stdc++.h>
using namespace std;

string str[110];

int main() {
    ios::sync_with_stdio(false);
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; ++i) cin >> str[i];
 
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (str[i][j] == '.') {
                int p = i + j;
                if (p % 2 == 0) str[i][j] = 'B';
                else str[i][j] = 'W';
            }
        }
    }

    for (int i = 0; i < r; ++i) cout << str[i] << endl;
    return 0;   
}
