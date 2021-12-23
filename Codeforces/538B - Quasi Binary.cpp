#include <bits/stdc++.h>
using namespace std;

string n;
int length, mx;
int mat[10][10];

int main() {
    cin >> n;
    length = n.size();
    for (int i = 0; i < length; ++i) {
        int k = n[i] - '0';
        mx = max(mx, k);
        for (int j = 0; j < 10; ++j) {
            if ( k == 0 ) break;
            mat[j][i] = 1;
            k--;
        }
    }

    vector<int> res;
    for (int i = 0; i < mx; ++i) {
        string num;
        for (int j = 0; j < length; ++j)
            num += char(mat[i][j] + '0');
        res.push_back(atoi(num.c_str()));
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el << ' ';
    cout << endl;

    return 0;
}
