#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    k--;
    int mat[n][n], l = n - k;

    int val = n * n - l + 1;
    for (int i = 0; i < n; ++i) {
        for (int j = k, v = 0; j < n; ++j, ++v) {
            mat[i][j] = val + v;
        }
        val -= l;
    }   

    val = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            mat[i][j] = val++;
        }
    }

    int sum = 0;
    for (int i = 0; i < n ; ++i) sum += mat[i][k];
    cout << sum << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
