#include <bits/stdc++.h>
using namespace std;

int mat[40][40];
int rs[40], cs[40];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
            s += mat[i][j];
        }
        rs[i] = s;
    }

    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int j = 0; j < n; ++j) s += mat[j][i];
        cs[i] = s;
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (cs[i] > rs[j]) cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;   
}

