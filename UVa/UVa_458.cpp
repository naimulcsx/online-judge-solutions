#include <bits/stdc++.h>
using namespace std;

void decrypt(string &);

int main() {
    string x;

    while( getline(cin, x) && x.length() )
        decrypt(x);

    return 0;
}

void decrypt(string &x) {
    for (int i = 0; i < x.length(); i++)
        cout << static_cast<char>(x[i] - 7);
    cout << "\n";
}
