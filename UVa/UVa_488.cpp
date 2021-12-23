#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, f;
        cin >> a >> f;

        while(f--) {
            for (int i = 0; i < a; ++i) {
                for (int j = 0; j <= i; ++j)
                    cout << i + 1;
                cout << endl;
            }

            for (int i = a - 1; i > 0; --i) {
                for (int j = 0; j < i; ++j)
                    cout << i;
                cout << endl;
            }

            if( t != 0 || f != 0 ) cout << endl;
        }
    }
    return 0;
}
