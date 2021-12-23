#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    int len = num.length(), odds = 0, evens = 0;
    for (auto el: num) ((el - '0') % 2 == 0) ? evens++: odds++;

    if ( evens == 0 ) cout << -1 << endl;
    else {
        bool flag = false;
        int first = num[0] - '0', last = num[len - 1] - '0', last_even;

        // first even which is less than or equal to last digit
        for (int i = 0; i < len - 1; ++i) {
            int dig = num[i] - '0';
            if ( dig % 2 == 0 ) last_even = i;
            if ( dig % 2 == 0 && last >= dig ) {
                swap(num[i], num[len - 1]);
                flag = true;
                break;
            }
        }

        if ( flag ) {
            cout << num << endl;
            return 0;
        }
        // flag is false, that means every even from 0 to n - 1 is > dig
        // swap the last even and the last digit
        swap(num[last_even], num[len - 1]);
        cout << num << endl;
    }
    return 0;
}
