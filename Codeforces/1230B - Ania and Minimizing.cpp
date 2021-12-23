#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int n, k;
    string str;
    cin >> n >> k >> str;
    
    if (n == 1 && k > 0) cout << 0 << endl;
    else if (k == 0) cout << str << endl;
    else {
        // n >= 2
        if (str[0] > '1') str[0] = '1', k--;

        for (int i = 1; i < n; ++i) {
            if (str[i] == '0') continue;
            else if (k > 0) str[i] = '0', k--;
        }

        cout << str << endl;
    }

    return 0;
}
