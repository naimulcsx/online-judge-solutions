#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> arr[4];
    for (int i = 0; i < 4; ++i) {
        if ( i == 2 ) {
            arr[i].push_back('#');
            for (int j = 1; j < 12; ++j) arr[i].push_back('.');
        } else for (int j = 0; j < 11; ++j) arr[i].push_back('#');
    }
    
    int r = 0, c = 0, p = 0;
    for (int i = 0; i < n; ++i) {
        if (r == 4) r = 0, c++;
        if ( c == 0 ) {
            arr[r][c] = 'O';
            r++;
        } else {
            arr[r][c] = 'O';
            if (r == 1) r += 2;
            else r++;
        }
    }

    cout << "+------------------------+" << endl;
    for (auto el: arr) {
        cout << '|';
        for (auto x: el) cout << x << '.';
        cout << '|';
        if (p == 0) cout << "D|)";
        else if (p != 2) cout << ".|";
        if (p == 3) cout << ")";
        cout << endl;
        p++;
    }
    cout << "+------------------------+" << endl;
    return 0;
}
