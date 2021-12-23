#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string mat[n];
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        mat[i] = str;
    }

    for ( int i = 0; i < n; ++i ) {
        for ( int j = 0; j < n; ++j ) {
            int cnt = 0;
            if ( i < n - 1 && mat[i + 1][j] == 'o') cnt++;
            if ( j < n - 1 && mat[i][j + 1] == 'o') cnt++;
            if ( j > 0 && mat[i][j - 1] == 'o') cnt++;
            if ( i > 0 && mat[i - 1][j] == 'o') cnt++;
            
            if (cnt & 1) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
