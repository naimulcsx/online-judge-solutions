#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string enc;
    cin >> enc;
    vector<string> data(10);
    for (auto &el: data) cin >> el;

    for (int i = 0; i < (int) enc.size(); i += 10) {
        auto it = find(begin(data), end(data), enc.substr(i, 10));
        cout << it - begin(data);
    }
    cout << endl;
    return 0;   
}
