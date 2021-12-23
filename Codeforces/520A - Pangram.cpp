#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;

    map<char, bool> data;
    for ( int i = 'a'; i <= 'z'; ++i )
        data.insert({ tolower(i), false });

    // mark present letters
    for ( int i = 0; i < n; ++i )
        data[ tolower(s[i]) ] = true;

    bool is_panagram = true;
    for ( auto it = data.begin(); it != data.end(); ++it ) {
        // if any letter is missing in the string
        if ( !it->second ) {
            is_panagram = false;
            break;
        }
    }

    if ( is_panagram ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
