#include <iostream>
using namespace std;

int main() {
    int cigg, butts;

    while(cin >> cigg >> butts) {
        int count = 0, b = cigg, temp;

        while( b >= butts ) {
            temp = b;
            count += (b / butts);
            b /= butts;
            b += (temp % butts);
        }

        cout << cigg + count << endl;
    }

    return 0;
}
