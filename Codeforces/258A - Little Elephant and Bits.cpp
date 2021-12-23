#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string res = "";
    bool skipped = false;
    for (auto el: str) {
        if(!skipped && el == '0') {
            skipped = true;
            continue;
        }
        res += el;
    }

    str.pop_back();
    if (skipped) cout << res << endl;
    else cout << str << endl;

    return 0;
}
