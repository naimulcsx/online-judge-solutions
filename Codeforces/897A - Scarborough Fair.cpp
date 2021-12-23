#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    string s;
    cin >> n >> m >> s;

    while(m--) {
        int l, r;
        char from, to;
        cin >> l >> r >> from >> to;
        l--, r--;

        for ( int i = l; i <= r; i++ )
            if ( s[i] == from )
                s[i] = to;
    }

    cout << s << endl;
    return 0;
}
