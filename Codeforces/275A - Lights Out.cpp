#include <bits/stdc++.h>
using namespace std;

bool mat[3][3];

int main() {
    ios::sync_with_stdio(false);

    int ops[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> ops[i][j];

    
    for ( int i = 0; i < 3; ++i ) {
        for ( int j = 0; j < 3; ++j ) {
            int toggle_count = ops[i][j];

            if ( toggle_count % 2 != 0 ) mat[i][j] = !mat[i][j];

            
            if ( i - 1 >= 0 )
                if ( toggle_count % 2 != 0 ) mat[i - 1][j] = !mat[i - 1][j];
            
            if ( i + 1 < 3 )
                if ( toggle_count % 2 != 0 ) mat[i + 1][j] = !mat[i + 1][j];

            if ( j - 1 >= 0 ) 
                if ( toggle_count % 2 != 0 ) mat[i][j - 1] = !mat[i][j - 1];

            if ( j + 1 < 3 ) 
                if ( toggle_count % 2 != 0 ) mat[i][j + 1] = !mat[i][j + 1];

        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mat[i][j]) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }

    return 0;
}
