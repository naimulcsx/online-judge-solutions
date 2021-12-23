#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {

    int n;
    string line;
    cin >> n >> line;

    vector<char> res(10);
    for (int i = 0; i < 10; ++i ) res[i] = '0';

    for (int i = 0; i < n; ++i ) {
        if ( isdigit(line[i]) ) res[line[i] - '0'] = '0';

        else if ( line[i] == 'L' ) {
            for (int j = 0; j < 10; ++j) {
                if (res[j] == '0') {
                    res[j] = '1';
                    break;
                }
            }
        }

        else if ( line[i] == 'R' ) {
            for (int j = 10; j >= 0; --j) {
                if (res[j] == '0') {
                    res[j] = '1';
                    break;
                }
            }
        }
    }
    
    for (auto el: res) cout << el;
    return 0;
}
