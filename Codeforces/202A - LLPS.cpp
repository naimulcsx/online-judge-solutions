#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    char mx = 0;
    for (auto el: str) mx = max(mx, el);
    for (auto el: str) if (el == mx) cout << el;
    cout << endl;
    return 0;
}
