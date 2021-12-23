#include <bits/stdc++.h>
using namespace std;

string str;
int q, st, ed, k;

int main() {
    cin >> str >> q;

    while( q-- )  {
        cin >> st >> ed >> k;
        k = k % (ed - st + 1);

        string sub = "";
        for (int i = st - 1; i < ed; ++i) sub += str[i];
        rotate(sub.rbegin(), sub.rbegin() + k, sub.rend());
        for (int i = st - 1, j = 0; i < ed; ++i, ++j) str[i] = sub[j];
    }

    cout << str << endl;
    return 0;
}
