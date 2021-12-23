#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    vector<int> first, second;
    for (int i = 0; i < n; ++i) first.push_back(str[i] - '0');
    for (int i = n; i < 2 * n; ++i) second.push_back(str[i] - '0');

    sort(begin(first), end(first));
    sort(begin(second), end(second));

    bool flag = first[0] > second[0];

    if (flag) {
        for (int i = 0; i < n; ++i) {
            if (first[i] <= second[i]) {
                cout << "NO" << endl;
                return 0;
            }
        }

    } else {
        for (int i = 0; i < n; ++i) {
            if (second[i] <= first[i]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;    
    return 0;
}
