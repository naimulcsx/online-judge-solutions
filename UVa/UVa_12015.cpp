#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t, c = 1;
    cin >> t;
    while( t-- ) {
        int rel[10], mx = 0;
        string domains[10];

        for (int i = 0; i < 10; ++i) {
            cin >> domains[i] >> rel[i];
            mx = max( mx, rel[i] );
        }

        cout << "Case #" << c << ":" << endl;
        for (int i = 0; i < 10; ++i)
            if ( rel[i] == mx ) 
                cout << domains[i] << endl;
        c++;
    }
    return 0;
}
