#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, input, max = 0, min = 1000;
        cin >> n;

        while(n--) {
            cin >> input;
            if (input > max) max = input;
            if (input < min) min = input;
        }

        cout << 2 * (max - min) << endl;
    }
    return 0;
}
