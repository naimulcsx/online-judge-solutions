#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int input, prev = 0, mx = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if ( input == prev ) {
            mx = max(count, mx);
            count = 1;
        }

        if ( input != prev ) 
            count++, prev = input;
    }

    mx = max(count, mx);
    cout << mx << endl;
    return 0;
}
