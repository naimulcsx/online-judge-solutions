#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m, even_count = 1;
    cin >> n >> m;

    for ( int i = 0; i < n; ++i ) {
        
        for ( int j = 0; j < m; ++j ) {
            if ( (i + 1) % 2 == 1 ) cout << "#";
            else {
                if ( even_count % 2 == 1 ) {
                    if ( j == (m - 1) ) cout << "#";
                    else cout << ".";
                }
                else {
                    if (j == 0) cout << "#";
                    else cout << ".";
                }
            }
        }
        
        if ( (i + 1) % 2 == 0 ) even_count++;
        cout << endl;
    }

    return 0;
}
