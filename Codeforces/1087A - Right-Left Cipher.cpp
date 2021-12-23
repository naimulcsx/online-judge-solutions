#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, res = "";
    cin >> s;

    int i = s.length() / 2, j = i + 1;
    if ( s.length() % 2 == 0 ) i--, j--;

    while( i >= 0 && j < s.length() ) {
        res += s[i];
        res += s[j];
        i--, j++;
    }

    if ( i == 0 ) res += s[i];

    if ( s.length() == 1 ) cout << s << endl;
    else cout << res << endl;
    return 0;
}
