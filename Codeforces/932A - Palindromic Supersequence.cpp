#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, rev;
    cin >> str;
    rev = str;
    reverse(begin(rev), end(rev));
    cout << str << rev << endl;
    return 0;
}
