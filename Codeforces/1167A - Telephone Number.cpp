#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream & operator << (ostream &os, vector<T> vec) {
    for (auto el: vec) os << el << ' ';
    return os;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string str;
        cin >> n >> str;

        if (n < 11) {
            cout << "NO" << endl;
            continue;
        }

        int first_pos = -1;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '8') {
                first_pos = i;
                break;
            }
        }

        if (first_pos == -1) cout << "NO" << endl;
        else if (n - 1 - first_pos >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    

    return 0;
}
